#include<iostream>
using namespace std;

int main(){
    long long num=102030406,temp,temp2,b,rem,x,sum;
    sum = x = b = 0;
    temp=num;

    while (num>0)
    {
        rem = num % 10;
        if(rem != 0 && b == 0){
            b = rem;
        }
        else if (rem != 0 )
        {
            b = (b*10) + rem;
        }
        num = num/10;
    }

    temp2 = b;

    while (b>0)
    {
        rem = b % 10;
        sum = sum + rem;
        x = x * 10 + rem;
        b/=10;
    }
    
    cout<<temp<<endl;
    cout<<temp2<<endl;
    cout<<x<<endl;
    cout<<sum<<endl;
    cout<<x*sum<<endl;
    
}