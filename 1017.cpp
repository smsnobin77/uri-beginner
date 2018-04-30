#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <cmath>
#define M 3.14159

using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b){
        cout<<fixed<<setprecision(3)<<a*(b/12.0)<<endl;
    }
    return 0;
}

