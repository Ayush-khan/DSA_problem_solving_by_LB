// Given a binary array nums, return the maximum number of consecutive 1's in the array.?
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                // if(nums[i+1]==1)
                count++;
            }
            else
            {     //ye logic mera khud ka hai or kaam kar rha hai
                if(count>=count1 && count!=0){
                count1=count;

                count = 0;
                }
            }  
            // ye uthaya hai or kaam kar rha hai
            // if (count > count1)
            // {
            //     count1 = count;
            // }
        }
        return count1;
    }
    // if(count>count1){
    //     return count;
    // }
    // else{
    //     return count1;
    // }
};
int main()
{
    // int target;
    vector<int> v1 = {1, 1, 1,1,1,1, 1, 0, 0, 0, 1,1,1,1,1,1,1, 0,0,0, 1, 1, 1, 1, 0,0, 0, 1, 1};
    cout << "Enter the targeted element of an array" << endl;
    // cin >> target;
    Solution s1;
    int majority_Element = s1.findMaxConsecutiveOnes(v1);
    // cout<<endl<<"The majority Element in an array is:"<<endl;
    cout << "majority_Element : " << majority_Element << endl;
}