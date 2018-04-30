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
        cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<0.5*a*c<<endl;
        cout<<"CIRCULO: "<<fixed<<setprecision(3)<<M*c*c<<endl;
        cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<((a+b)/2.0)*c<<endl;
        cout<<"QUADRADO: "<<fixed<<setprecision(3)<<b*b<<endl;
        cout<<"RETANGULO: "<<fixed<<setprecision(3)<<a*b<<endl;
    }
    return 0;
}






