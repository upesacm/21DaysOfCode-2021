#include<iostream>
using namespace std;

/*
PS: Here we are sorting the entered array in ascending order only.
*/


//Function sort for Bubble Sort

void Bubble_sort(int a[],int b)
{
    int m;
    int y=0;

//Sorting the array

    for(int x=0; x<b; x++)
    {
        for(m=0; m<b-1;m++)
        {
            if(a[m]>a[m+1])
            {
                y=a[m+1];
                a[m+1]=a[m];
                a[m]=y;
            }
        }
    }

//Display of sorted array

    cout<<"\nThe sorted array is as follows:";

    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }
}

//Function for Insertion sort

void Insertion_sort(int a[],int b)
{
    int ptr,i,temp;

//Sorting the array

    for ( i = 1; i < b; i++)
    {
        temp=a[i];
        ptr=i-1;

        while (temp<a[ptr] && ptr>=0)
        {
            a[ptr+1]=a[ptr];
            ptr=ptr-1;
        }
        a[ptr+1]=temp;
    }
    
//Display of sorted array

    cout<<"\nThe sorted array is as follows:";

    for(int j=0;j<b;j++)
    {
        cout<<a[j]<<" ";
    }
}

//Function for Selection sort

void Selection_sort(int a[],int b)
{
    int i,j,cn,temp;

//calculation of sorted array

    for(i=0;i<b-1;i++)
    {
        cn=i;
        for(j=i+1;j<b;j++)
        { 
            if(a[cn]>a[j])
                cn=j;
        }
        temp=a[cn];
        a[cn]=a[i];
        a[i]=temp;
    }

//Display of sorted array

cout<<"\nThe sorted array is as follows:";

for(int k=0;k<b;k++)
{
    cout<<a[k]<<" ";
}

}
//main function

int main()
{
    int n,ch;
    cout<<"Enter the number of elements you want to enter in the array\n";
    cin>>n;
    int arr[n];

    cout<<"\nEnter the elements of the array:";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

cout<<"\nChoose an option from the following:\n1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort";
cin>>ch;

switch(ch)
{
    case 1: 
        Bubble_sort(arr,n);

    break;

    case 2:
        Insertion_sort(arr,n);

    break;

    case 3:
        Selection_sort(arr,n);
    
    break;

    default:

    cout<<"Wrong choice entered";

}
    return 0;
}

