#include<iostream>
#include<cstring>
using namespace std;

int main(){

    int n,a,b;
    string r;

    cout<<"Addition of Numbers";
    cout<<"\nPress = for result after more than two numbers"<<endl;

    cout<<"Enter number: ";
    cin>>a;

    do
    {
        cout<<"Enter number or = : ";
        cin>>r;
        if (r == "=")
        {
            break;
        }
        b = stoi(r);
        a = a+b;
        
    } while (r != "=");
    
    cout<<"Addition of Numbers = "<<a;
}