//Binary Search in single dimensional array//
#include<stdio.h>
int main()
{
    int array[100],size,search,first,last,middle;
    printf("Enter desired size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements in the array-\n");
    for(int i=0 ; i<size ; i++)
       scanf("%d",&array[i]);
    printf("Enter the element to be found: ");
    scanf("%d",&search);
    first=0;
    last=size-1;
    middle=(first+last)/2;
    while(first <= last) 
      {
        if(array[middle] < search)
          first = middle + 1;
        else if (array[middle] == search)
          {
            printf("%d found at location %d.\n", search, middle+1);
            break;
          }
        else
          last = middle - 1;
        middle = (first + last)/2;
      }
    if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);
    return 0;
}
    