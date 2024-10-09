#include<iostream>
using namespace std;
int main(){
    double x;
    double y=0;
    cin>>x;
    if (x==0)y=0;
    else y=1.0*1/x;
    printf("f(%.1f) = %.1f",x,y);
    return 0;
}
