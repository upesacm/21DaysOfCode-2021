#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int main()
{
    //Enter your code here. Read input from STDIN. Print output to STDOUT 
    char s[50];
    int size,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count0=0;
    cout<<"Enter the desired number of characters you want to enter in the string-";
    cin>>size;
    cout<<"Enter the string- ";
    for(int i=0 ; i<size ; i++)
       cin>>s[i];
    cout<<"The entered string is-";
    for(int i=0 ; i<size ; i++)
       cout<<s[i]; 
    for(int i=0 ; i<size ; i++)
       {
           if(s[i]=='1')
             count1++;
           if(s[i]=='2')
             count2++;
           if(s[i]=='3')
             count3++;
           if(s[i]=='4')
             count4++;
           if(s[i]=='5')
             count6++;
           if(s[i]=='6')
             count6++;
           if(s[i]=='7')
             count7++;
           if(s[i]=='8')
             count8++;
           if(s[i]=='9')
             count9++;
           if(s[i]=='0')
             count0++;
       } 
    cout<<endl<<count1;
    for(int i=0 ; i<size ; i++)
       {
           if(isalpha(s[i]))
             s[i]='0';
           if(s[i]=='1')
             s[i]=count1;
           if(s[i]=='2')
             s[i]=count2;
           if(s[i]=='3')
             s[i]=count3;
           if(s[i]=='4')
             s[i]=count4;
           if(s[i]=='5')
             s[i]=count5;
           if(s[i]=='6')
             s[i]=count6;
           if(s[i]=='7')
             s[i]=count7;
           if(s[i]=='8')
             s[i]=count8;
           if(s[i]=='9')
             s[i]=count9;
           if(s[i]=='0')
             s[i]=count0;
       } 
    cout<<endl<<"String after editing is-";
    for(int i=0 ; i<size ; i++)
       cout<<s[i]<<" ";
    return 0;
}