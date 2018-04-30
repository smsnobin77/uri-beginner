#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <cmath>
#define M 3.14159

using namespace std;
int main()
{
    int R;
    double r;
    while(cin>>R){
        r = (4.0/3.0)*M*pow(R*1.0,3.0);
        cout<<"VOLUME = "<<fixed<<setprecision(3)<<r<<endl;
    }
    return 0;
}





