#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {35,45,56};

    nums.push_back(1);
    nums.push_back(2);

    cout<<endl <<" vector = ";
    for (int i : nums)
    {
        cout<< "  " << i;
    }

    nums.pop_back();

    cout<<endl <<" vector = ";
    for (int i : nums)
    {
        cout<< "  " << i;
    }

    cout << endl << nums.at(6);
}