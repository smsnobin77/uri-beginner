#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float a,b,c;
    while(cin>>a>>b>>c){
        cout<<"MEDIA = "<<fixed<<setprecision(1)<<(a*2.0+b*3.0+c*5.0)/10.0<<endl;
    }
    return 0;
}



