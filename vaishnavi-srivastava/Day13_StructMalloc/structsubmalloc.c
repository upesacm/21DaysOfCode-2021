#include<stdio.h>
#include<stdlib.h>
struct subject
{
    char subname[50];
    int subcode;
}s[20];
int main()
{
    int size;
    printf("Enter the number of ssubjects to be entered: ");
    scanf("%d",&size);
    int *ptr;
    ptr=(int *)malloc(size*sizeof(int));
    if(ptr==NULL)
      printf("Memory block not created // ERROR");
    else
      {
          printf("Memory block created\n");
          for(int i=0 ; i<size ; i++)
             {
                printf("SUBJECT %d\n",i+1);
                printf("Enter subject name: ");
                scanf("%s",&s[i].subname);
                printf("Enter subject code: ");
                scanf("%d",&s[i].subcode);
             }
          for(int i=0 ; i<size ; i++)
             {
                printf("\nSUBJECT %d\n",i+1);
                printf("Subject name: %s\n",s[i].subname);
                printf("Subject code: %d\n",s[i].subcode);
             }
      }
    return 0 ;
}