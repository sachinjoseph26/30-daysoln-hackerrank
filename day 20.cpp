#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,swapno=0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    //int swapno=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapno++;
            }
        }
    }
    if(swapno==0)
    {
        cout<<"Array is sorted in 0 swaps."<<endl;
    }
    else {
         cout<<"Array is sorted in "<<swapno<<" swaps."<<endl;
    }
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[a.size()-1]<<endl;
    return 0;
}
