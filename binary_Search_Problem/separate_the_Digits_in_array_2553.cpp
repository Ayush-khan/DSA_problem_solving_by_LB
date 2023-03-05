// Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.

// To separate the digits of an integer is to get all the digits it has in the same order.

// For example, for the integer 10921, the separation of its digits is [1,0,9,2,1].
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        // method using string to solve this questions
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            string num = to_string(nums[i]);
            for (int j = 0; j < num.size(); j++)
            {
                ans.push_back(num[j] - '0');
            }
        }
        return ans;
        // i am trying to solve it but some error is thrown due to which answer is not matched
        // vector<int> s1;
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     int Digit = nums[i];
        //     if (Digit >= 9)
        //     {
        //         while (Digit > 0)
        //         {

        //             cout << "Inside while loop" << endl;
        //             int lastDigit=Digit;
        //             if(lastDigit>=9){
        //             lastDigit=lastDigit/10;
        //             int put=lastDigit%10;
        //             cout<<"put= "<<put<<endl;
        //             s1.push_back(put);
        //             }
        //             else{
        //                 cout<<"ELse digit"<<lastDigit<<endl;
        //                  s1.push_back(lastDigit);
        //             }
        //             Digit=Digit/10;
        //             // Digit = Digit / 10;
        //         }
        //     }
        //     else
        //     {
        //         s1.push_back(Digit);
        //     }
        // }
        // return s1;
    }
};
int main()
{
    Solution s1;
    vector<int> v1 = {48763, 25, 83, 4, 77};
    vector<int> result = s1.separateDigits(v1);
    cout << "Vector:= ";
    // trying to solve
    // solved
    for (int i = 0; i < result.size(); i++)
    {
        cout << "[" << result[i] << "]";
        if (i < result.size() - 1)
        {
            // helooo
            cout << ",";
        }
    }
}