
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
    string a;
    int i;
    while(cin>>a[0]>>a[1]>>a[2]){
        sort(a,a+3);
        for(i=0;i<3;i++){
            cout<<a[i]<<endl;
        }
        cout<<endl;
        for(i=2;i>-1;i--){
            cout<<a[i]<<endl;
        }
    }
    return 0;
}



