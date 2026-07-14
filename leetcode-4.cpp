#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,2,3};
    vector<int> vec1 = {4,5,6};

    vector<int> vec2;
    double median;

    for (int num : vec){
        vec2.push_back(num);
    }
    for(int num : vec1){
        vec2.push_back(num);
    }

    sort(vec2.begin(),vec2.end());

    cout<<endl <<" vector 1 = ";
    for (int i : vec)
    {
        cout<< "  " << i;
    }

    cout<<endl <<" vector 2 = ";
    for (int i : vec1)
    {
        cout<< "  " << i;
    }
    
    cout<<endl <<" vector 3 = ";
    for (int i : vec2)
    {
        cout<< "  " << i;
    }

    cout<<endl<<" vector 3 size = "<<vec2.size()<<endl;

    double res,a;

    if (vec2.size()%2 == 0)
    {
        cout<<" even";

        a = vec2.size() / 2;

        res = vec2[a] + vec2[a-1];
        
        median = res / 2;
    }

    cout<<endl<<"a = "<<a<<" median = "<<median;
    
}
