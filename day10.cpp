#include<iostream>
using namespace std;

int main()
{
    int n,count=0,max=0;
    cin >> n;

    while(n)
    {
        if (n&1)        // checking odd or not
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (max < count)
        {
            max = count;
        }
        n>>=1;      //right shift--- n/2**1
    }
    cout << max;

    return 0
}