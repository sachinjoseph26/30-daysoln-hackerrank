#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector< vector<int> > vm(6,vector<int>(6));
    for(int i = 0;i < 6;i++)
    {
       for(int j = 0;j < 6;j++)
       {
          cin >> vm[i][j];
       }
    }
    int maxsum=-64;  
    int hoursum;   
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            hoursum=vm[i+1][j+1];    
            for(int k=0;k<3;k++)
                {                   
                    hoursum = hoursum + vm[i][j+k] + vm[i+2][j+k]; 
                }             
            if(hoursum > maxsum)         
                maxsum = hoursum;       
        }      
    }     
    cout<<maxsum;
    return 0;
}