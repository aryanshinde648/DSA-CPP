#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

void square();
void cube();
void powerOfNum();
void add();
void sub();
void mul();
void divide();

int main(){

    int a;
    cout<<"Hello User \nWelcome to Math App";
    do
    {
        cout<<"\n----------------"<<endl;
        cout<<"      Menu"<<endl;
        cout<<"----------------"<<endl;
        cout<<"1. Addition of Numbers"<<endl;
        cout<<"2. Subtraction of 2 Numbers"<<endl;
        cout<<"3. Multiplication of 2 Numbers"<<endl;
        cout<<"4. Division of 2 Numbers"<<endl;
        cout<<"5. Find Square of Number"<<endl;
        cout<<"6. Find Cube of Number"<<endl;
        cout<<"7. Find Power of Number"<<endl;
        cout<<"10. Exit"<<endl;
        cout<<"----------------"<<endl;
        cout<<"Choose option:";
        cin>>a;
        cout<<"----------------"<<endl;
        switch (a)
        {
        case 1:
            add();
            break;
        
        case 2:
            sub();
            break;
        
        case 3:
            mul();
            break;
        
        case 4:
            divide();
            break;

        case 5:
            square();
            break;

        case 6:
            cube();
            break;

        case 7:
            powerOfNum();
            break;

        case 10:
            cout<<"Thank You!!!"<<endl;
            cout<<"----------------"<<endl;
            break;
        }

    } while (a!=10);
    
}

void add(){
    double a,b;
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

void sub(){
    double a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<a<<" - "<<b<<" = "<<a-b;
}

void mul(){
    double a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<a<<" * "<<b<<" = "<<a*b;
}

void divide(){
    double a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<a<<" / "<<b<<" = "<<a/b;
}

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


