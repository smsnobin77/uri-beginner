#include <iostream>

using namespace std;
int main()
{
    int n,h,m,s;
    while(cin>>n){
        s = n % 60;
        int div = n / 60;
        if(div<60){
            m = div;
            h = 0;
        }
        else{
            m = div%60;
            h = div/60;
        }
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
}
