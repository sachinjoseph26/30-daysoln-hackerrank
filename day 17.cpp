#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    try{
        string S;
        cin >> S;
        int n=stoi(S);
        cout<<n<<endl;  
     }catch(...){
         cout<<"Bad String"<<endl;
     }
    return 0;
}