//tic tac toe
#include<iostream>
#include<stdio.h>
using namespace std;
void draw(char a[9])
{
    cout<<"  "<<a[0]<<"  |  "<<a[1]<<"  |  "<<a[2]<<"  "<<endl;
    cout<<"-----------------"<<endl;
    cout<<"  "<<a[3]<<"  |  "<<a[4]<<"  |  "<<a[5]<<"  "<<endl;
    cout<<"-----------------"<<endl;
    cout<<"  "<<a[6]<<"  |  "<<a[7]<<"  |  "<<a[8]<<"  "<<endl;
}
int check(char a[9])
{
    if((a[0]==a[1]&&a[1]==a[2]&&a[2]=='o')||(a[3]==a[4]&&a[4]==a[5]&&a[5]=='o')||(a[6]==a[7]&&a[7]==a[8]&&a[8]=='o')||(a[0]==a[3]&&a[3]==a[6]&&a[6]=='o')||(a[1]==a[4]&&a[4]==a[7]&&a[7]=='o')||(a[2]==a[5]&&a[5]==a[8]&&a[8]=='o')||(a[0]==a[4]&&a[4]==a[8]&&a[8]=='o')||(a[2]==a[4]&&a[4]==a[6]&&a[6]=='o'))return 1;
    else if((a[0]==a[1]&&a[1]==a[2]&&a[2]=='x')||(a[3]==a[4]&&a[4]==a[5]&&a[5]=='x')||(a[6]==a[7]&&a[7]==a[8]&&a[8]=='x')||(a[0]==a[3]&&a[3]==a[6]&&a[6]=='x')||(a[1]==a[4]&&a[4]==a[7]&&a[7]=='x')||(a[2]==a[5]&&a[5]==a[8]&&a[8]=='x')||(a[0]==a[4]&&a[4]==a[8]&&a[8]=='x')||(a[2]==a[4]&&a[4]==a[6]&&a[6]=='x'))return 2;
    else if(a[0]!='+'&&a[1]!='+'&&a[2]!='+'&&a[3]!='+'&&a[4]!='+'&&a[5]!='+'&&a[6]!='+'&&a[7]!='+'&&a[8]!='+')return 3;
    else return 0;
}
int main()
{
    char a[9]={'+','+','+','+','+','+','+','+','+'},p1[10],p2[10];
    int m,n,t;
    draw(a);
    cout<<"\t\t\t\tTIC TAC TOE\n";
    cout<<"\tEnter your names : \n";
    cout<<"\t Player 1 ( o ) : ";
    cin>>p1;
    cout<<"\t Player 2 ( x ): ";
    cin>>p2;
    system("cls");
    draw(a);
    cout<<"\t"<<p1<<" : ";
    cin>>m;
    a[m]='x';
    draw(a);
    if(check(a)==1||check(a)==2||check(a)==3)goto end;
    cout<<"\t"<<p2<<" : ";
    cin>>n;
    a[n]='o';
    draw(a);
    if(check(a)==1||check(a)==2||check(a)==3)goto end;
    end:
    if(check(a)==1)cout<<"\n\n\t\t\t"<<p1<<" won";
    else if(check(a)==2)cout<<"\n\n\t\t\t"<<p2<<" won";
    else cout<<"\n\n\t\t\tIt's a tie";
}
