#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#define M 3.14159

using namespace std;
int main()
{
    int a,b,a2,b2;
    float c,c2;
    while(cin>>a>>b>>c && cin>>a2>>b2>>c2){
        cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<b*c+b2*c2<<endl;
    }
    return 0;
}




