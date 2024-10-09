#include<iostream>
using namespace std;
int main(){
    double num,money=0;
    cin>>num;
    if (num<=50&&num>=0)
    {   
        money=num*0.53;        
    }else if (num<0)
    {
        printf("Invalid Value!");
        return 0;
    }else
    {
        money=50*0.53+(num-50)*0.58;
    }
    
    printf("cost = %.2lf",money);
    return 0;
 
}