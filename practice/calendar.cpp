//calendar
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    int date,month,year,day;
    int mcode[12]={1,4,4,0,2,5,0,3,6,1,4,6};
    int ycode[28]={5,6,0,1,3,4,5,6,1,2,3,4,6,0,1,2,4,5,6,0,2,3,4,5,0,1,2,3};
    char dcode[7][10]={"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
    cout<<"CALENDAR INFINITY !!"<<endl;
    cout<<" Enter date : ";
    cin>>date;
    cout<<" Enter month : ";
    cin>>month;
    cout<<" Enter year : ";
    cin>>year;
    day=(date+mcode[month-1]+ycode[year%28])%7;
    if(year%4==0&&(month==1||month==2))
    {
        if(day==0)day=6;
        else day--;
    }
    if( (month>=1&&month<=12) && (year>0) )
    {
        if( ((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&(date>=1&&date<=31)) || ((month==4||month==6||month==9||month==11)&&(date>=1&&date<=30)) )
         cout<<" Day : "<<dcode[day]<<endl;
        else if( (month==2) && ( (year%4==0 && (date>=1&&date<=29) ) || (year%4!=0 && (date>=1&&date<=28)) ) )
         cout<<" Day : "<<dcode[day]<<endl;
        else cout<<"Invalid Date";
    }
    return 0;
}