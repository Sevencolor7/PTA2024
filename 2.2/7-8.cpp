#include<iostream>
using namespace std;
int main(){
    int st,end,t,s,m;
    cin>>st>>end;
    t=end-st;
    s=t%100;
    m=t/100;
    if (m<10&&s<10)
    {
        printf("0%d:0%d",m,s);
        return 0;
    }else if (m<10&&s>10)
    {
        printf("0%d:%d",m,s);
        return 0;
    }else if (m>10&&s<10)
    {
        printf("%d:0%d",m,s);
        return 0;
    }else{
        printf("%d:%d",m,s);
    }
    
    return 0;
}