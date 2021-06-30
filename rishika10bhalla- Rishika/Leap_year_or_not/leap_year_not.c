#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ",year);
    scanf("%d",&year);
    if(year %400==0){
        printf("%d is the leap year",year);
    }
    else if(year%4==0){
        printf("%d is leap year",year);
    }
    else if(year%4!=0){
        printf("%d is not leap year",year);
    }
    else{
        printf("the year is not the leap year");
    }
}