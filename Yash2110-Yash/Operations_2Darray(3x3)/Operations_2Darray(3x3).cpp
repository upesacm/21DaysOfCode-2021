#include<iostream>
using namespace std;

//Function for Addition of two matrices (3x3)

void add(int arr_1[3][3] , int arr_2[3][3])
{
    int i,j;
    int sum[3][3];

    //calculating sum of two matrix

    for(i =0 ;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        
        {
            sum[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }

    //displaying sum of two matrix
    
    cout<<"\nThe sum of both the matrix is as follows:\n";

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            cout<<sum[i][j]<<" ";

        }
            cout<<endl;
    }


}


//Function for Subtraction of two matrices (3x3)

void sub(int arr_1[3][3] , int arr_2[3][3])
{
    int i,j;
    int diff[3][3];

    //calculating difference of two matrix

    for(i =0 ;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        
        {
            diff[i][j] = arr_1[i][j] - arr_2[i][j];
        }
    }

    //displaying difference of two matrix
    
    cout<<"\nThe difference of both the matrix is as follows:\n";

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            cout<<diff[i][j]<<" ";

        }
            cout<<endl;
    }


}

//Function for multiplication of two matrices(3x3)

void mul(int arr_1[3][3] , int arr_2[3][3])
{
    int i,j,k;
    int pro[3][3];

    //Calculating product of matrices

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            pro[i][j] = 0;
            for(k = 0;k < 3;k++)
            {
                pro[i][j]+=arr_1[i][k]*arr_2[k][j];
            }
        }
    }

    //Displaying the product of matrices

    cout<<"\nThe product of both the matrices is as follows:\n";

    for(i = 0;i < 3;i++)
    
    {
        for(j = 0;j < 3;j++)
        {
            cout<<pro[i][j]<<" ";
        }
        cout<<endl;
    }

}

//Function for Transpose

void tran(int arr_1[3][3] , int arr_2[3][3])
{
    int i,j;

    //Displaying transpose of first matrix

    cout<<"\nThe transpose of first matrix is as follows:\n";

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            cout<<arr_1[j][i]<<" ";
        }
            cout<<endl;
    }

    //Displaying transpose of second matrix

    cout<<"\nThe transpose of first matrix is as follows:\n";

     for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            cout<<arr_2[j][i]<<" ";
        }
            cout<<endl;
    }   
}

int main()
{
    
    int a[3][3];
    int b[3][3];
    int ch;
    
    cout<<"Enter elements in first matrix(3x3)";
    
    
    //Entering elements in first matrix
    
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout<<"\nEnter element at: "<<i+1<<","<<j+1;
            cin>>a[i][j];
        }
    }
    
    
    //Entering elements in second matrix
    
    cout<<"\nEnter elements in second matrix(3x3)";
    
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout<<"\nEnter element at: "<<i+1<<","<<j+1;
            cin>>b[i][j];
        }
    }
    
    cout<<"\nThe entered matrices are as follows:";
    
    //Displaying first matrix
    
    cout<<"\nThe first matrix is as follows:\n";
    
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    //Displaying second matrix
    
    cout<<"\nThe second matrix is as follows:\n";
    
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    cout<<"\nSelect any of the following operations you want to perform: \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Transpose";
    cin>>ch;

    switch(ch)
    {
        case 1:

            add(a,b);

        
        break;

        case 2:

            sub(a,b);
        
        break;
        
        case 3:

            mul(a,b);
        
        break;
        
        case 4:

            tran(a,b);
        
        break;
        
        default:
        
        cout<<"\nWrong choice entered";
    }

    return 0;
}