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
    int i,n;
    while(cin>>n){
        for(i=1;i<=n;i++){
            if(i%2==1){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}







