#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> result=digits;
        reverse(result.begin(),result.end());
        int carry=1;
        for(int i=0; i<result.size(); i++)
        {
            int temp=(result[i]+carry);
            result[i]=temp%10;
            carry=temp/10;
        }
        if(carry!=0)
        {
            result.push_back(carry);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
