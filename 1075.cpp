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
    int n;
    while(cin>>n){
        for(int i=1;i<=10000;i++){
            if(i%n==2){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}










