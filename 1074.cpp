#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
#define M 3.14159

using namespace std;
int main()
{
    double i,n,pos;
    pos = 0;
    for(i=1;i<=6;i++){
        cin>>n;
        if(n>=0){
            pos++;
        }
    }
    cout<<pos<<" valores positivos"<<endl;
    return 0;
}





