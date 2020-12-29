#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int fine=0;
    int ad,am,ay,ed,em,ey;
    cin>>ad;    //input actual date
    cin>>am;
    cin>>ay;
       
    cin>>ed;    //input expected date
    cin>>em;
    cin>>ey;
    
    if(ay==ey)
    {
        if(am==em)
        {
            if(ad>ed)
            {
                fine=15*(ad-ed);
            }
        }
        else if(am>em)
        {
            fine=500*(am-em);
        }
    }
    else if(ay>ey)
        fine=10000;
    
    cout<<fine;
    return 0;
}
