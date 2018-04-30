#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <cmath>
#define M 3.14159

using namespace std;
int main()
{
    float a,b,c,d;
    while(cin>>a>>b>>c>>d){
        cout<<fixed<<setprecision(4)<<sqrt((a-c)*(a-c)+(b-d)*(b-d))<<endl;
    }
    return 0;
}
