#include<iostream>
using namespace std;
int main()
{
    char s[50];
    cout<<"Enter the time in the format 'HR:MN:SCam/pm' - ";
    for(int i=0 ; i<10 ; i++)
       cin>>s[i]; 
    cout<<endl;
    if(s[0]=='1' && s[1]=='2')
      {
         if(s[8]=='a' || s[8]=='A')
           {
              s[0]='0';
              s[1]='0';
           }
      }
    else if(s[8]=='p' || s[8]=='P')
     {
        if(s[0]=='0')
          {
             if(s[1]<'8')
               {
                 if(s[1]=='1')
                   s[1]='3';
                 else if(s[1]=='2')
                   s[1]='4';
                 else if(s[1]=='3')
                   s[1]='5';
                 else if(s[1]=='6')
                   s[1]='8';
                 else if(s[1]=='7')
                   s[1]='9';
                 s[0]='1';
               }
             else if(s[1]>='8')
               {
                 if(s[1]=='8')
                   s[1]='0';
                 if(s[1]=='9')
                   s[1]='1';
                 s[0]='2';
               }
          }
        if(s[0]=='1')
          {
             if(s[1]=='0')
               s[1]='2';
             if(s[1]=='1')
               s[1]='3';
          }
     }
    cout<<"Time in 24 hour format is-";
    for(int i=0 ; i<8 ; i++)
       cout<<s[i];
    return 0;
}