#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double n,N;
    while(cin>>n){
        int f = n;
        double p = n,rs;
        cout<<"NOTAS:"<<endl;
        f = n/100.00;
        n -= f*100.00;
        cout<<f<<" nota(s) de R$ 100.00"<<endl;
        f = n/50.00;
        n -= f*50.00;
        cout<<f<<" nota(s) de R$ 50.00"<<endl;
        f = n/20.00;
        n -= f*20.00;
        cout<<f<<" nota(s) de R$ 20.00"<<endl;
        f = n/10.00;
        n -= f*10.00;
        cout<<f<<" nota(s) de R$ 10.00"<<endl;
        f = n/5.00;
        n -= f*5.00;
        cout<<f<<" nota(s) de R$ 5.00"<<endl;
        f = n/.00;
        n -= f*.00;
        cout<<f<<" nota(s) de R$ 2.00"<<endl;
        f = n/1.00;
        n -= f*1.00;
        cout<<"MOEDAS:"<<endl;
        /*cout<<f<<" moeda(s) de R$ 1.00"<<endl;
        p = p%100.00;
        rs = p%0.50;
        p -= rs*0.50;
        cout<<rs<<" moeda(s) de R$ 0.50"<<endl;
        rs = p%0.25;
        p -= rs*0.25;
        cout<<rs<<" moeda(s) de R$ 0.25"<<endl;
        rs = p%0.10;
        p -= rs*0.10;
        cout<<rs<<" moeda(s) de R$ 0.10"<<endl;
        rs = p%0.05;
        p -= rs*0.05;
        cout<<rs<<" moeda(s) de R$ 0.05"<<endl;
        rs = p%0.01;
        p -= rs*0.01;
        cout<<rs<<" moeda(s) de R$ 0.01"<<endl;*/
    }
}


