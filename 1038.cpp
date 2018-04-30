#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b){
        switch(a){
        case 1:
            printf("Total: R$ %.2lf\n",b*4.0);
            break;
        case 2:
            printf("Total: R$ %.2lf\n",b*4.50);
            break;
        case 3:
            printf("Total: R$ %.2lf\n",b*5.0);
            break;
        case 4:
            printf("Total: R$ %.2lf\n",b*2.0);
            break;
        case 5:
            printf("Total: R$ %.2lf\n",b*1.50);
            break;
        }
    }

    return 0;
}
