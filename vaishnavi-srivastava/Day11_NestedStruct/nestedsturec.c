#include<stdio.h>
struct student_record
{
    char name[50];
    long int SAPID;
    char enrollment[15];
    struct date
       {
           int date;
           int month;
           int year;
       }dor,dob,doj;
}s[20];
int main()
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d",&size);
    for(int i=0 ; i<size ; i++)
       {
           printf("STUDENT %d\n",i+1);
           printf("Enter name: ");
           scanf("%s",&s[i].name);
           printf("Enter SAPID: ");
           scanf("%d",&s[i].SAPID);
           printf("Enter enrollment number: ");
           scanf("%s",&s[i].enrollment);
           printf("Enter date of registration:\n");
             {
                printf("Date:");
                scanf("%d",&s[i].dor.date);
                printf("Month:");
                scanf("%d",&s[i].dor.month);
                printf("Year:");
                scanf("%d",&s[i].dor.year);
             }
           printf("Enter date of birth:\n");
             {
                printf("Date:");
                scanf("%d",&s[i].dob.date);
                printf("Month:");
                scanf("%d",&s[i].dob.month);
                printf("Year:");
                scanf("%d",&s[i].dob.year);
             }
           printf("Enter date of joining:\n");
             {
                printf("Date:");
                scanf("%d",&s[i].doj.date);
                printf("Month:");
                scanf("%d",&s[i].doj.month);
                printf("Year:");
                scanf("%d",&s[i].dor.year);
             }
       }
    for(int i=0 ; i<size ; i++)
       {
           printf("\nSTUDENT %d\n",i+1);
           printf("Name: %s\n",s[i].name);
           printf("SAPID: %d\n",s[i].SAPID);
           printf("Enrollment number: %s\n",s[i].enrollment);
           printf("Date of registration:\n");
             {
                printf("Date:%d ,",s[i].dor.date);
                printf("Month:%d ,",s[i].dor.month);
                printf("Year:%d \n",s[i].dor.year);
             }
           printf("Date of birth:\n");
             {
                printf("Date:%d ,",s[i].dob.date);
                printf("Month:%d ,",s[i].dob.month);
                printf("Year:%d \n",s[i].dob.year);
             }
           printf("Date of joining:\n");
             {
                printf("Date:%d ,",s[i].doj.date);
                printf("Month:%d ,",s[i].doj.month);
                printf("Year:%d \n",s[i].doj.year);
             }
       }
    return 0 ;
}