#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a1=81;  // 示例数据
    double sum,n;
    cin>>n;
    for (int i=1;i<=n;i++){
        sum=sum+a1;
        a1=sqrt(a1);

    }
    printf("%.6lf",sum);
    return 0;
}
