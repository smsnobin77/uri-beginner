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
    double a,b,c;
    while(cin>>a>>b>>c){
        if((pow(b,2)<4*a*c)||a==0) cout<<"Impossivel calcular"<<endl;
        else{
            cout<<"R1 = "<<fixed<<setprecision(5)<<(-b+sqrt(pow(b,2)-4*a*c))/(2.0*a)<<endl;
            cout<<"R2 = "<<fixed<<setprecision(5)<<(-b-sqrt(pow(b,2)-4*a*c))/(2.0*a)<<endl;
        }
    }
    return 0;
}




