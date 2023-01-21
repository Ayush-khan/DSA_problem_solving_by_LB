#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {   sort(nums.begin(),nums.end());
        vector<int>::iterator it = nums.begin();
        cout << "HELLOO" << endl;
        int i = 0;
        for(;i<nums.size();i++){
            if(nums[i]!=0){
                break;
            }
            // else{
            //     nums.erase(nums.begin()+i);
            // }
        }
        nums.erase(nums.begin(),nums.begin()+i);
        for(int j=0;j<i;j++){
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

        // while(it!=nums.end()){
        //     cout<<"INsise"<<endl;
        //     if(*it==0){
        //         nums.erase(nums.begin()+it);
        //         nums.push_back(0);
        //     }
        //     it++;
        // }
        while (it != nums.end())
        {
            cout << *it << " ";
            it++;
        }
    }
};
int main()
{
    vector<int> v1 = {0, 1, 0,0,0,0,3, 12};
    // int arr[] = {2, 0, 2, 1, 1, 0};
    Solution s1;
    int siz;
    cout << " Starting..." << endl;
    s1.moveZeroes(v1);
}