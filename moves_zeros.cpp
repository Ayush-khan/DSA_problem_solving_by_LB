#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int>::iterator it = nums.begin();
        cout << "HELLOO" << endl;
        int i = 0;
        for (; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                break;
            }
        }
        nums.erase(nums.begin(), nums.begin() + i); // remove the stating zeros
        for (int j = 0; j < i; j++)
        {
            nums.push_back(0);
        }
        // logic doesn't work
        // for (;i < nums.size();)
        // {cout<<"HYYY"<<endl;
        //     if (nums[i] == 0)
        //     {  nums.push_back(0);
        //         nums.erase(nums.begin() + i);

        //     }
        //     else{
        //         i++;
        //     }
        // }

        // while (it != nums.end())
        // {
        //     cout << "INsise" << endl;
        //     if (*it == 0)
        //     {
        //     // {cout<<"*it = "<<*it<<" ";
        //         nums.erase(nums.begin() + i);
        //         nums.push_back(0);
        //         if(nums[i+1]==0){
        //             i=i-1;
        //             it=it-1;
        //         }
        //         // it=it-1;
        //         // i=i-1;
        //     }
        //     // else if(*it!=0){
        //     //      i++;
        //     // it++; 
        //     // }
        //         i++;
        //     it++; 
            
        // }
        for(int i=0;i<nums.size();i++)
        {
            cout << nums[i] << " ";
            
        }
    }
};
int main()
{
    vector<int> v1 = {0, 1, 0, 0, 0, 0, 3, 12};
    Solution s1;
    int siz;
    cout << " Starting..." << endl;
    s1.moveZeroes(v1);
}