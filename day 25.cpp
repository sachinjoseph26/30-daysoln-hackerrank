#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i == 0)    return false;
        
    return true;
        
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int num;
        cin>>num;
        
        if(num<2)
            cout<<"Not prime"<<endl;
        else {
        
            if(isprime(num))    cout<<"Prime"<<endl;
            else    cout<<"Not prime"<<endl;
        }
    }
    return 0;
}
