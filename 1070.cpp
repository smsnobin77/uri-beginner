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
    int x,i;
    cin>>x;
    i=0;
    while(i!=6){
        if(x%2==1){
            cout<<x<<endl;
            i++;
        }
        x++;
    }
    return 0;
}








