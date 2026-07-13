#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        int digits[] = {
            12,23,34,45,56,67,78,89,
            123,234,345,456,567,678,789,
            1234,2345,3456,4567,5678,6789,
            12345,23456,34567,45678,56789,
            123456,234567,345678,456789,
            1234567,2345678,3456789,
            12345678,23456789,
            123456789
        };

        vector<int> sortedList;

        int size = sizeof(digits) / sizeof(int);

        cout<<size<<endl;

        for(int i=0;i<size;i++){
            if(low <= digits[i]){

                if ( digits[i] <= high)
                {
                    sortedList.push_back(digits[i]);
                }
                
            }
        }

        return sortedList;
        
    }
};

int main(){
    int low = 100 , high = 300;
    Solution s;
    vector<int> sortedList = s.sequentialDigits(low,high);

    cout<< "low = "<<low<< "   &  high = "<<high<<endl;
    for (int i : sortedList)
    {
        cout<<" "<<i;
    }
    
}