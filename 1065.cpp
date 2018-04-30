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
    int i,n,pos;
    pos = 0;
    for(i=1;i<=5;i++){
        cin>>n;
        if(n%2==0){
            pos++;
        }
    }
    cout<<pos<<" valores pares"<<endl;
    return 0;
}






