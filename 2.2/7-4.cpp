#include<iostream>
#include<math.h>

using namespace std;
int main(){
    double x,ans;
    cin>>x;
    if (x>=0)
    {
        ans=sqrt(x);
    }
    else{
        ans=pow(x+1,2)+2*x+1/x;
    }
    printf("f(%.2lf) = %.2lf",x,ans);
    return 0;
}