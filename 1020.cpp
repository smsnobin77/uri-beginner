#include <iostream>

using namespace std;
int main()
{
    int n,y,m,d;
    while(cin>>n){
        y = n / 365;
        int mod = n % 365;
        m = mod / 30;
        d = mod % 30;
        cout<<y<<" ano(s)"<<endl;
        cout<<m<<" mes(es)"<<endl;
        cout<<d<<" dia(s)"<<endl;
    }
}

