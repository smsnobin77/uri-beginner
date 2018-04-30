#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>

using namespace std;
int main()
{
    char name[10000];
    double a,b;
    gets(name);
    cin>>a>>b;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<a+(b*.15)<<endl;
    return 0;
}



