#include <iostream>
#include <iomanip>
#define M 3.14159

using namespace std;
int main()
{
    double R,A;
    while(cin>>R){
        cout<<"A="<<fixed<<setprecision(4)<<M*R*R<<endl;
    }
    return 0;
}

