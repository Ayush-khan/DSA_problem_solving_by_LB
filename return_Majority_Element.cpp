#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums[0];
        cout<<j;
        // for(int i=0;i<nums.size();i++){
        //     if()
        // }
        
    }
};
int main()
{ 
    // int target;
    vector<int> v1={2,2,1,1,1,2,2};
    cout << "Enter the targeted element of an array" << endl;
    // cin >> target;
    Solution s1;
    int majority_Element=s1.majorityElement(v1);
    // cout<<endl<<"The majority Element in an array is:"<<endl;
    //  cout<<"majority_Element : "<<majority_Element<<endl;
    
}