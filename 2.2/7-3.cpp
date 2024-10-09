#include<iostream>
#include <cmath>
using namespace std;
int main(){
    double i,m,y,r;
    cin>>m>>y>>r;
    i=m*(pow(1+r,y))-m;
    printf("interest = %.2lf",i);

    return 0;
}