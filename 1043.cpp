
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <cmath>
#define M 3.14159

using namespace std;
int main()
{
    float a,b,c;
    while(cin>>a>>b>>c){
        if((a+b>c)&&(a+c>b)&&(b+c>a)){
            cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
        }
        else{
            cout<<"Area = "<<fixed<<setprecision(1)<<((a+b)/2.0)*c<<endl;
        }
    }
    return 0;
}


