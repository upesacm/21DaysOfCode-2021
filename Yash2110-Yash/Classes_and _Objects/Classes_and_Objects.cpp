#include<iostream>
using namespace std;

class Student
{
  private:
           int scores[5];
           int sum=0;
  public:
           void input()
           {
               for(int i=0;i<5;i++)
               {
                   cin>>scores[i];
                
               }
           }   
            int calculateTotalScore()
            {
                for(int j=0;j<5;j++)
                {
                    sum=sum+scores[j];
                }
               return sum; 
            }   
                  
};

int main() 
{
    int n;        
    cin >> n;           //input number of students 
    Student *s = new Student[n]; 
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }


    int kristen_score = s[0].calculateTotalScore();     //calculating Kristens marks

//calculating how many students scored more than kristen

    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    cout<<count;
    
    return 0;
}