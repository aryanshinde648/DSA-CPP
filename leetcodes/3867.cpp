#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    long long gcdSum(vector<int> &nums)
    {
        long long result, max = 0;
        vector<int> prefixGcd;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
            result = gcd(nums[i], max);
            prefixGcd.push_back(result);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        result = 0;
        for (int i = 0, j = prefixGcd.size() - 1; i<prefixGcd.size(), j> i; i++, j--)
        {
            result = result + gcd(prefixGcd[i], prefixGcd[j]);
        }

        return result;
    }

    long long gcd(long long a, long long b){
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
};

int main(){
    vector<int> nums = {3,6,2,8};
    Solution s;

    cout<< s.gcdSum(nums);
    return 0;
}