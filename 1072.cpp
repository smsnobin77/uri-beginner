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
    int t,i,n,in,out;
    while(cin>>t){
        in = 0; out =0;
        for(i=1;i<=t;i++){
            cin>>n;
            if(n>=10 && n<=20){
                in++;
            }
            else out++;
        }
        cout<<in<<" in"<<endl;
        cout<<out<<" out"<<endl;
    }
    return 0;
}











