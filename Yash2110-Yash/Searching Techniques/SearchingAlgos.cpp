#include<iostream>
using namespace std;

//Function for Linear Search

void Linear_Search(int a[],int b,int c)

{
    int j,result;
    
    for(j = 0;j < b;j++)
    {
        if(a[j] == c)
        
            {
                result = j;
                break;
                
            }
        else
            {
                result = -1;
            }
            
    }
    
    if(result == -1)
        cout<<"\nElement not found";
    else
        cout<<"\nElement found at position  "<<result+1;
}


//Function for Binary Search (For array sorted in ascending order)

void Binary_Search_Asc(int a[] ,int b ,int c)
{
    int first = 0;
    int last,mid;
    
    do
    {
        mid = (first+last)/2;
        
            if(a[mid] == c)
                {
                    cout<<"\nElement found at position"<<mid+1;
                    break;
                }
            else
                if (a[mid] < c)
                first = mid+1;
            else
                last = mid-1;
    }
    while(first <= last);
    
    if(first > last)
    {
        cout<<"\nElement not found";
    }
    
}

//Function for Binary Search (For array sorted in descending order)

void Binary_Search_Desc(int a[] ,int b ,int c)
{
    int first = 0;
    int last,mid;
    
    do
    {
        mid = (first+last)/2;
        
            if(a[mid] == c)
                {
                    cout<<"\nElement found at position"<<mid+1;
                    break;
                }
            else
                if (a[mid] > c)
                first = mid+1;
            else
                last = mid-1;
    }
    while(first >= last);
    
    if(first > last)
    {
        cout<<"\nElement not found";
    }
    
}

//main function

int main()
{
    int n,ch,x;

    cout<<"Enter the number of elements you want to enter in the array:-\n";
    cin>>n;

    int arr[n];
    

    cout<<"Enter the elements of array in a sorted manner\n"; 

    // PS. for Binary Search array should be sorted but for linear search it is not necessary for the array to be sorted
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The entered array is as follows:- \n";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
        
    }

    cout<<"\nEnter the number to be searched :";
    cin>>x;
    
    cout<<"We have two following searching algorithms: \n 1. Linear Search \n 2.Binary Search(Sorted in Ascending Order)\n3.Binary Search(Sorted in Descending Order)\n Please Enter the choice you want to perform";
    cin>>ch;


   switch(ch)
   {
       case 1:

            Linear_Search(arr , n , x);

        break;

       case 2:
       
            Binary_Search_Asc(arr , n , x);
      
        break;
        
        case 3:
        
            Binary_Search_Desc(arr , n , x);
        
        break;
            

       default:

            cout<<"\nWrong choice entered";
   }
    
    return 0;
}

