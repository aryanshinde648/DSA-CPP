#include<iostream>
#include<math.h>
using namespace std;

void square(){
    float num,res;
    cout<<"\nPlease enter a number:";
    cin>>num;
    res=num*num;
    cout<<"Square of "<<num<<" is "<<res<<endl;
}

void cube(){
    double num,res;
    cout<<"\nPlease enter a number:";
    cin>>num;
    res=pow(num,3);
    cout<<"Cube of "<<num<<" is "<<res<<endl;
}

void powerOfNum(){
    double num,res,y;
    cout<<"\nPlease enter a number:";
    cin>>num;
    cout<<"Enter Power of "<<num<<":";
    cin>>y;
    res=pow(num,y);
    cout<<num<<" to the Power of "<<y<<" is "<<res<<endl;
}

int main(){

    int a;
    cout<<"Hello User \nWelcome to Math App"<<endl;
    do
    {
        cout<<"----------------"<<endl;
        cout<<"   Menu"<<endl;
        cout<<"1. Find Square of Number"<<endl;
        cout<<"2. Find Cube of Number"<<endl;
        cout<<"3. Find Power of Number"<<endl;
        cout<<"10. Exit"<<endl;
        cout<<"Choose option:";
        cin>>a;
        switch (a)
        {
        case 1:
            square();
            break;

        case 2:
            cube();
            break;

        case 3:
            powerOfNum();
            break;

        case 10:
            cout<<"Thank You!!!";
            break;
        }

    } while (a!=10);
    
}



