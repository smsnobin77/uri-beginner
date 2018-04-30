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
    int a,b,r,i;
    while(cin>>a>>b){
        r = 0;
        if(a>b){
            for(i=b+1;i<a;i++){
                if(i%2!=0){
                    r+=i;
                }
            }
        }
        else if(b>a){
            for(i=a+1;i<b;i++){
                if(i%2!=0){
                    r+=i;
                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}











