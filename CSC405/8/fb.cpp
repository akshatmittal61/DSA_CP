/*********FACEBOOK : Presented By : Akshat Mittal **************************/
/*********FACEBOOK : Graphics disabled & .exe mode enabled******************/

#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fstream>
using namespace std;
struct DOB
{
    int date, month, year;
};
class account
{
public:
    char fname[30], lname[30], userid[30], password[30];
    DOB dob;
    void page();
    void home();
    void Profile();
    void settings();
    void post(int);
    void update();
    void people();
} user;
void timer(char *a = "akshat", int t = 100, int ch = 1);
void Rectangle(int, int, int, int);
void rect(int, int, int, int);
char calendar[13][10] = {"Null", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
void signup();
void actions(int);
void hack();
enum
{
    MENU
};
void main()
{
    system("clear");
    // randomize();
    fstream fio("C:\\tc\\bin\\fb.txt", ios::out | ios::in);
start:
    int i = 0, j = 0;
    char ch, found = 'n', login = 'n';
    // gotoxy(25, 7);
    cout << "Do you have turbo c++ facebook account (y/n)";
    // ch = getch();
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        system("clear");
        char userid[30], password[30];
        strcpy(userid, " ");
        strcpy(password, " ");
        cout << "\n\t\t\t\t USER SIGNIN";
        Rectangle(15, 10, 65, 20);
        // gotoxy(18, 13);
        cout << "User id : ";
        strcpy(userid, " ");
        strcpy(password, " ");
        // strcpy(userid,"akshatmittal2506");
        // strcpy(password,"love");
        // gets(userid);
        cin >> userid;
        fio.read((char *)&user, sizeof(user));
        while (!fio.eof())
        {
            if (!strcmp(userid, user.userid))
            {
                found = 'y';
                goto stop_search;
            };
            fio.read((char *)&user, sizeof(user));
        }
    stop_search:
        if (found == 'y')
        {
            // gotoxy(18, 15);
            cout << "Password (" << strlen(user.password) << " characters) : ";
            // for (i = 0; i < strlen(user.password); ++i)
            // {
            // password[i] = getch();
            cin >> password;
            // cout << "*";
            // }
            if (!strcmp(password, user.password))
                login = 'y';
            // getch();
        }
        else
            goto crash;
    }
    else if (ch == 'n' || ch == 'N')
    {
        Rectangle(10, 3, 70, 21);
        signup();
        login = 'y';
    }
    if ((ch == 'y' || ch == 'Y' || ch == 'n' || ch == 'N') && login == 'y')
    {
        system("clear");
    post:
        system("clear");
        user.page();
        // COMMAND PROMPT
        char com[50];
        char command[4][50] = {"home", "profile", "settings", "logout"};
        int check = 2;
        // gotoxy(35, 23);
        cin >> com;
        if (!strcmp(com, "logout"))
            check = 0;
        else if (!strcmp(com, "home"))
            check = 1;
        else if (!strcmp(com, "profile"))
            check = 2;
        else if (!strcmp(com, "settings"))
            check = 3;
        else if (!strcmp(com, "actions"))
            check = 4;
        else if (!strcmp(com, "pass123"))
            check = 5;
        else
            check = rand() % 50 + 10;
        switch (check)
        {
        case 0:
            system("clear");
            exit(0);
            break;
        case 1:
        repeat:
            system("clear");
            user.page();
            char m[2] = {user.fname[0]};
            user.home();
            char a;
            user.post(rand() % 14);
            // a = getch();
            cin >> a;
            if (a == 'n')
                goto repeat;
            else
                goto post;
            break;
        case 2:
            user.Profile();
            // getch();
            goto post;
            break;
        case 3:
            user.settings();
            char b;
            // b = getch();
            cin >> b;
            if (b == 'e' || b == 'E')
                user.update();
            goto post;
            break;
        case 4:
            actions(MENU);
            goto post;
            break;
        case 5:
            hack();
            goto post;
            break;
        default:
            goto post;
            break;
        }
    }
    else
    {
    crash:
        system("clear");
        int t = 25, n = 0;
        // gotoxy(25, 5);
        timer("ERROR 508");
        // gotoxy(5, 10);
        timer("System encountered an unexpexted error", t, n);
        // gotoxy(25, 18);
        timer("Unable to recover files", t, n);
        // gotoxy(20, 25);
        timer("Press a key to exit the portal", t, n);
        char s;
        // s = getch();
        cin >> s;
        if (s == 'r' || s == 'R')
            goto start;
    }
    // getch();
    fio.close();
}

void timer(char *a, int t, int ch)
{
    for (int i = 0; i < strlen(a); ++i)
    {
        cout << a[i];
        if (ch == 1)
            cout << " ";
        // delay(t);
    }
}

void account::page()
{
    system("clear");
    // textcolor(random(14) + 1);
    Rectangle(1, 1, 80, 24);            // screen
    Rectangle(1, 1, 80, 3);             // top bar
    Rectangle(1, 3, 40 - 25, 21);       // left option
    Rectangle(40 + 25, 3, 80, 21);      // right help
    Rectangle(40 - 25, 3, 40 + 25, 21); // main screen
    // textcolor(random(14) + 1);
    // gotoxy(3, 2);
    printf("%c", toupper(user.fname[0]));
    // gotoxy(4, 2);
    // textcolor(random(14) + 1);
    // gotoxy(40 - (strlen(user.fname) + strlen(user.lname)) / 2, 2);
    printf("%s %s", user.fname, user.lname);
    // textcolor(random(14) + 1);
    // gotoxy(70, 5);
    printf("HELP");
    // textcolor(random(14) + 1);
    // gotoxy(2, 7);
    printf("%s", user.fname);
    // textcolor(random(14) + 1);
    // gotoxy(2, 9);
    printf("0.logout");
    // gotoxy(2, 10);
    printf("1.home");
    // gotoxy(2, 11);
    printf("2.profile");
    // gotoxy(2, 12);
    printf("3.settings");
    // gotoxy(2, 13);
    printf("4.actions");
}

void account::home()
{
    // textcolor(random(14) + 1);
    // gotoxy(40 - 23, 5);
    printf("%c", fname[0]);
    // gotoxy(40 - 20, 5);
    printf("What's new with you");
    // gotoxy(40 + 27, 7);
    printf("n : next post");
    rect(40 - 23, 7, 40 + 23, 19);
}

void account::Profile()
{
    page();
    char name[100];
    strcpy(name, fname);
    strcat(name, " ");
    strcat(name, lname);
    // textcolor(random(14) + 1);
    // gotoxy(40 - 10, 8);
    printf("My profile");
    // textcolor(random(14) + 1);
    // gotoxy(40 - 15, 11);
    printf(" Name     : %s", name);
    // gotoxy(40 - 15, 13);
    printf(" User id  : %s", userid);
    // gotoxy(40 - 15, 15);
    printf(" Password : ");
    for (int i = 0; i < strlen(password); ++i)
        printf("*");
    // gotoxy(40 - 15, 17);
    printf(" DOB      : %d %s %d", dob.date, calendar[dob.month], dob.year);
}

void account::settings()
{
    page();
    char name[100];
    strcpy(name, fname);
    strcat(name, " ");
    strcat(name, lname);
    // textcolor(random(14) + 1);
    // gotoxy(40 - 10, 8);
    printf("My profile");
    // textcolor(random(14) + 1);
    // gotoxy(40 - 15, 10);
    printf(" Name     : %s", name);
    // gotoxy(40 - 15, 11);
    printf(" User id  : %s", userid);
    // gotoxy(40 - 15, 12);
    printf(" Password : ");
    for (int i = 0; i < strlen(password); ++i)
        printf("*");
    // gotoxy(40 - 15, 13);
    printf(" DOB      : %d %s %d", dob.date, calendar[dob.month], dob.year);
    // textcolor(random(14) + 1);
    // gotoxy(40 + 27, 7);
    printf("Press e to");
    // gotoxy(40 + 27, 8);
    printf("edit info");
}

void account::update()
{
}

void account::post(int a)
{
    switch (a)
    {
    case 1:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 7, 9);
        printf("LOVE CALCULATOR");
        // gotoxy(40 - 12, 11);
        char name1[20], name2[20];
        strcpy(name1, user.fname);
        cout << "Love between " << name1 << " & ";
        int a = 0, i = 0, j = 0, t = 0, r = 0, u = 0, e = 0, l = 0, o = 0, v = 0, True = 0, love = 0, Truelove = 0, m = 0, n = 0, sp = 0;
        // gets(name2);
        cin >> name2;
        while (name1[i] != '\0')
        {
            if (name1[i] == ' ')
                sp++;
            else if (name1[i] == 't')
                t++;
            else if (name1[i] == 'r')
                r++;
            else if (name1[i] == 'u')
                u++;
            else if (name1[i] == 'e')
                e++;
            else if (name1[i] == 'l')
                l++;
            else if (name1[i] == 'o')
                o++;
            else if (name1[i] == 'v')
                v++;
            else if (name1[i] == 'a')
                a++;
            ++i;
        }
        while (name2[j] != '\0')
        {
            if (name2[j] == ' ')
                sp++;
            else if (name2[j] == 't')
                t++;
            else if (name2[j] == 'r')
                r++;
            else if (name2[j] == 'u')
                u++;
            else if (name2[j] == 'e')
                e++;
            else if (name2[j] == 'l')
                l++;
            else if (name2[j] == 'o')
                o++;
            else if (name2[j] == 'v')
                v++;
            else if (name2[j] == 'a')
                a++;
            ++j;
        }
        True = t + r + u + e + a;
        love = l + o + v + e + a;
        while (True / 10 != 0)
        {
            m = True % 10;
            True /= 10;
            True += m;
        }
        while (love / 10 != 0)
        {
            n = love % 10;
            love /= 10;
            love += n;
        }
        Truelove = (True * 10) + love;
        // gotoxy(40 - 3, 13);
        printf("is %d %", Truelove);
        // gotoxy(35, 15);
        printf("By : Akshat Mittal");
        break;
    case 2:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 21, 10);
        printf("Jisse chaha uske hum ho na sake");
        // gotoxy(40 - 21, 11);
        printf("aankhon m the aansu ");
        // gotoxy(40 - 21, 12);
        printf("magar hum ro na sake");
        // gotoxy(40 - 21, 13);
        printf("1 din usne kaha milenge khwabon m");
        // gotoxy(40 - 21, 14);
        printf("hamari badkismati dekho");
        // gotoxy(40 - 21, 15);
        printf("us din s hum so na sake");
        // textcolor(random(14) + 1);
        // gotoxy(40, 18);
        printf("By : Akshat Mittal");
        break;
    case 3:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 10);
        printf("Bhagwan mehngi ghadi");
        // gotoxy(40 - 15, 11);
        printf("Sabko de");
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 12);
        printf("Par muskil ghadi");
        // gotoxy(40 - 15, 13);
        printf("kisi ko na de");
        break;
    case 4:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 10);
        printf("In exams etc. means");
        // gotoxy(40 - 17, 12);
        printf(" e .) end of");
        // gotoxy(40 - 17, 13);
        printf(" t .) thinking");
        // gotoxy(40 - 17, 14);
        printf(" c .) capacity");
        // gotoxy(40, 17);
        printf("            ");
        break;
    case 5:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 19, 10);
        printf("Aankhon k parde bhi nam ho gye h");
        // gotoxy(40 - 19, 11);
        printf("Baaton k silsile jaise");
        // gotoxy(40 - 19, 12);
        printf(" khatam ho gye h");
        // gotoxy(40 - 19, 13);
        printf("Pata nhi glti kiski h");
        // gotoxy(40 - 19, 14);
        printf("Waqt bura h ya");
        // gotoxy(40 - 19, 15);
        printf(" bure hum ho gye h");
        // textcolor(random(14) + 1);
        // gotoxy(40 - 19, 17);
        printf("   By : Akshat Mittal");
        break;
    case 6:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 9);
        printf("DEEP VOICE");
        // gotoxy(40 - 19, 10);
        printf("Jawab nhi dete ");
        // gotoxy(40 - 19, 11);
        printf(" ab kisi ko");
        // gotoxy(40 - 19, 13);
        printf("Ye kaq humne");
        // gotoxy(40 - 19, 14);
        printf(" waqt ko de diya h");
        // gotoxy(40 - 19, 17);
        printf("     By : Akshat Mittal");
        break;
    case 7:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 9);
        printf("The voice of my soul");
        // gotoxy(40 - 19, 10);
        printf("Kya mohabbat ka yahi dastoor hota h ");
        // gotoxy(40 - 19, 11);
        printf("jise chaho wahi tuse door hota h");
        // gotoxy(40 - 19, 13);
        printf("Tut ta h mohabbat m dil is tarah");
        // gotoxy(40 - 19, 14);
        printf("Jaise kannch ka koi khilona");
        // gotoxy(40 - 19, 15);
        printf(" Choor choor hota h");
        // gotoxy(40 - 19, 18);
        printf("     By : Akshat Mittal");
        break;
    case 8:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 9);
        printf("HARSH BUT TRUE");
        // gotoxy(40 - 19, 10);
        printf("Dil ka dard ek raaz bankar reh gaya ");
        // gotoxy(40 - 19, 11);
        printf("mera pyar mazak bankar reh gaya");
        // gotoxy(40 - 19, 13);
        printf("Dil k saudagaron se dillagi kar baithe");
        // gotoxy(40 - 19, 14);
        printf("Shayad isliye mera pyar ");
        // gotoxy(40 - 19, 15);
        printf(" alfaz bankar reh gaya");
        // gotoxy(40 - 19, 18);
        printf("     By : Akshat Mittal");
        break;
    case 9:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 9);
        printf("My heart says ...");
        // gotoxy(40 - 19, 10);
        printf("Mat raho humse door itna");
        // gotoxy(40 - 19, 11);
        printf("ki apne faisle par afsos ho jaye");
        // gotoxy(40 - 19, 13);
        printf("Shayad kal tum humse hum baat karo");
        // gotoxy(40 - 19, 14);
        printf(" aur hum khamosh ho jaye ...");
        // gotoxy(40 - 19, 17);
        printf("     By : Akshat Mittal");
        break;
    case 10:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 9);
        printf("Aankhen unki ");
        // gotoxy(40 - 19, 10);
        printf("Mohabbat shuru hui thi jin aankhon se");
        // gotoxy(40 - 19, 11);
        printf("aaj unhe dekhne ko aankhen tarasti h");
        // gotoxy(40 - 19, 13);
        printf("ae sawan le ja meri annkhonn ko");
        // gotoxy(40 - 19, 14);
        printf("uski yaad m tujhse zyada barasti h");
        // gotoxy(40 - 19, 17);
        printf("     By : Akshat Mittal");
        break;
    case 11:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 8);
        printf("S O R R Y");
        // gotoxy(40 - 21, 9);
        printf("Sara din nikal jata khaab sajate-2");
        // gotoxy(40 - 21, 10);
        printf("Intzaar h unka aisa ki aankhen ");
        // gotoxy(40 - 21, 11);
        printf("thak gayi annsu bahate-2");
        // gotoxy(40 - 21, 13);
        printf("Humne to maangi thi apne gunahon ki maafi");
        // gotoxy(40 - 21, 14);
        printf("Qismat m tanhai thi");
        // gotoxy(40 - 21, 15);
        printf("Zindagi guzar gayi manate-2");
        // gotoxy(40 - 21, 17);
        printf("     By : Akshat Mittal");
        break;
    case 12:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 9);
        printf("M aur mere ehsas ..");
        // gotoxy(40 - 21, 10);
        printf("har mehfil bhi royegi har dil bhi royega");
        // gotoxy(40 - 21, 11);
        printf("Jahan dubegi meri kashti wo sahil bhi royega");
        // gotoxy(40 - 21, 13);
        printf("Itna pyar bikher denge zamane m hum ");
        // gotoxy(40 - 21, 14);
        printf("qatl karke mera kaatil bhi royega");
        // gotoxy(40 - 21, 17);
        printf("     By : Akshat Mittal");
        break;
    default:
        // textcolor(random(14) + 1);
        // gotoxy(40 - 19, 9);
        printf("Black holes");
        // gotoxy(40 - 19, 11);
        printf("Due to having large masses");
        // gotoxy(40 - 19, 12);
        printf("Black holes have high gravity");
        // gotoxy(40 - 19, 13);
        printf("Such that light with highest speed");
        // gotoxy(40 - 19, 14);
        printf("can't escape from it");
        // gotoxy(40 - 19, 17);
        printf("       Time Mechanics");
        break;
    }
}

void actions(int type)
{
    switch (type)
    {
    case 0:
    start:
        user.page();
        rect(40 - 23, 7, 40 + 23, 19);
        fstream fio("C:\\tc\\bin\\fb.txt", ios::in);
        int i = 0, ask;
        account see[20], watch;
        fio.read((char *)&watch, sizeof(watch));
        while (!fio.eof())
        {
            // gotoxy(40 - 20, 8 + i);
            cout << i << " . " << watch.fname << ' ' << watch.lname;
            see[i] = watch;
            ++i;
            fio.read((char *)&watch, sizeof(watch));
        }
        // gotoxy(40 + 27, 7);
        printf("enter no. to ");
        // gotoxy(40 + 27, 8);
        printf("proceed");
    repeat:
        // gotoxy(35, 23);
        cout << "              ";
        // gotoxy(35, 23);
        cin >> ask;
        if (ask <= i)
        {
            see[ask].Profile();
            // gotoxy(40 + 27, 7);
            printf("backspace ");
            // gotoxy(40 + 27, 8);
            printf("to return");
            char jump;
            // jump = getch();
            cin >> jump;
            if (jump == '\b')
                goto start;
            else
                goto end;
        }
        else
            goto end;
        break;
    }
end:;
}

void hack()
{
start:
    user.page();
    rect(40 - 23, 7, 40 + 23, 19);
    fstream fio("C:\\tc\\bin\\fb.txt", ios::in);
    int i = 0, ask;
    account see[20], watch;
    fio.read((char *)&watch, sizeof(watch));
    while (!fio.eof())
    {
        // gotoxy(40 - 20, 8 + i);
        cout << i << " . " << watch.fname << ' ' << watch.lname;
        see[i] = watch;
        ++i;
        fio.read((char *)&watch, sizeof(watch));
    }
    // gotoxy(40 + 27, 7);
    printf("enter no. to ");
    // gotoxy(40 + 27, 8);
    printf("proceed");
repeat:
    // gotoxy(35, 23);
    cout << "              ";
    // gotoxy(35, 23);
    cin >> ask;
    if (ask <= i)
    {
        see[ask].page();
        char name[100];
        strcpy(name, see[ask].fname);
        strcat(name, " ");
        strcat(name, see[ask].lname);
        // textcolor(random(14) + 1);
        // gotoxy(40 - 10, 8);
        printf("My profile");
        // textcolor(random(14) + 1);
        // gotoxy(40 - 15, 11);
        printf(" Name     : %s", name);
        // gotoxy(40 - 15, 13);
        printf(" User id  : %s", see[ask].userid);
        // gotoxy(40 - 15, 15);
        printf(" Password : ");
        for (int i = 0; i < strlen(see[ask].password); ++i)
            printf("%c", see[ask].password[i]);
        // gotoxy(40 - 15, 17);
        printf(" DOB      : %d %s %d", see[ask].dob.date, calendar[see[ask].dob.month], see[ask].dob.year);
        //    see[ask].Profile();
        // gotoxy(40 + 27, 7);
        printf("backspace ");
        // gotoxy(40 + 27, 8);
        printf("to return");
        char jump;
        // jump = getch();
        cin >> jump;
        if (jump == '\b')
            goto start;
        else
            goto end;
    }
    else
        goto end;
end:;
}

void Rectangle(int ax, int ay, int bx, int by)
{
    int i, j;
    // gotoxy(ax, ay);
    printf("É");
    // gotoxy(ax, by);
    printf("Ó");
    // gotoxy(bx, ay);
    printf("»");
    // gotoxy(bx, by);
    printf("¼");
    for (i = ax + 1; i < bx; ++i)
    {
        // gotoxy(i, ay);
        printf("Í");
        // gotoxy(i, by);
        printf("Í");
    }
    for (i = ay + 1; i < by; ++i)
    {
        // gotoxy(ax, i);
        printf("º");
        // gotoxy(bx, i);
        printf("º");
    }
}
void rect(int ax, int ay, int bx, int by)
{
    int i, j;
    // gotoxy(ax, ay);
    printf("Ú");
    // gotoxy(ax, by);
    printf("À");
    // gotoxy(bx, ay);
    printf("¿");
    // gotoxy(bx, by);
    printf("Ù");
    for (i = ax + 1; i < bx; ++i)
    {
        // gotoxy(i, ay);
        printf("Ä");
        // gotoxy(i, by);
        printf("Ä");
    }
    for (i = ay + 1; i < by; ++i)
    {
        // gotoxy(ax, i);
        printf("³");
        // gotoxy(bx, i);
        printf("³");
    }
}

void signup()
{
start:
    system("clear");
    int verfy = 1, i = 0, j = 0;
    char confirm[30];
    fstream fio("fb.txt", ios::out | ios::app);
    // gotoxy(12, 5);
    cout << "First name : ";
    // gets(user.fname);
    cin >> user.fname;
    // gotoxy(12, 7);
    cout << "Last name : ";
    // gets(user.lname);
    cin >> user.lname;
    // gotoxy(12, 9);
    cout << "User id : ";
    // gets(user.userid);
    cin >> user.userid;
    // gotoxy(12, 11);
    cout << "Password (press sapce to terminate): ";
    //  gets(user.password);
    // do
    // {
    // user.password[i++] = getch();
    // cout << '*';
    // } while (user.password[i - 1] != ' ');
    // user.password[i - 1] = '\0';
    cin >> user.password;
    // gotoxy(12, 13);
    cout << "Confirm password (press sapce to terminate): ";
    /* do
    {
        confirm[j++] = getch();
        cout << '*';
    } while (confirm[j - 1] != ' ');
    confirm[j - 1] = '\0'; */
    cin >> confirm;
    if (strcmp(user.password, confirm))
        goto show;
    // gotoxy(12, 15);
    cout << "Date of Birth : ";
    // gotoxy(30, 15);
    cin >> user.dob.date;
    // gotoxy(33, 15);
    cin >> user.dob.month;
    // gotoxy(36, 15);
    cin >> user.dob.year;
    switch (user.dob.month)
    {
    case 1:
        if (!(user.dob.date <= 31 && user.dob.date >= 1))
            verfy = 0;
        break;
    case 2:
        if (user.dob.year % 4 == 0)
            if (!(user.dob.date <= 29 && user.dob.date >= 1))
                verfy = 0;
            else if (!(user.dob.date <= 28 && user.dob.date >= 1))
                verfy = 0;
        break;
    case 3:
        if (!(user.dob.date <= 31 && user.dob.date >= 1))
            verfy = 0;
        break;
    case 4:
        if (!(user.dob.date <= 30 && user.dob.date >= 1))
            verfy = 0;
        break;
    case 5:
        if (!(user.dob.date <= 31 && user.dob.date >= 1))
            verfy = 0;
        break;
    case 6:
        if (!(user.dob.date <= 30 && user.dob.date >= 1))
            verfy = 0;
        break;
    case 7:
        if (!(user.dob.date <= 31 && user.dob.date >= 1))
            verfy = 0;
        break;
    case 8:
        if (!(user.dob.date <= 31 && user.dob.date >= 1))
            verfy = 0;
        break;
    case 9:
        if (!(user.dob.date <= 30 && user.dob.date >= 1))
            verfy = 0;
        break;
    case 10:
        if (!(user.dob.date <= 31 && user.dob.date >= 1))
            verfy = 0;
        break;
    case 11:
        if (!(user.dob.date <= 30 && user.dob.date >= 1))
            verfy = 0;
        break;
    case 12:
        if (!(user.dob.date <= 31 && user.dob.date >= 1))
            verfy = 0;
        break;
    default:
        verfy = 0;
        break;
    }
    if ((!strcmp(user.fname, NULL)) || (!strcmp(user.lname, NULL)) || (!strcmp(user.userid, NULL)) || (!strcmp(user.password, NULL)) || (!user.dob.date) || (!user.dob.month) || (!user.dob.year) || verfy == 0)
    {
    show:
        cout << "\n\t\tUnable to login \n\t\t\tEnter full and meaningful details";
        // getch();
        goto start;
    }
    if (!isupper(user.fname[0]))
        toupper(user.fname[0]);
    if (!isupper(user.fname[0]))
        toupper(user.lname[0]);
    fio.write((char *)&user, sizeof(user));
    fio.close();
    // getch();
}