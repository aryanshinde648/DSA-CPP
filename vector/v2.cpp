// Finding / searching a number a in a vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {23,45,56,34,2,3,4,1};
    int a;

    cout<<"Enter a number u want find = ";
    cin>>a;

    for(int x : arr){
        if(a==x){
            cout<<"Number is found";
        }
    }

}