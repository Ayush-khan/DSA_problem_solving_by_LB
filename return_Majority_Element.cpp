#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums[0];
        int count1=1;
        int count2=0;
        cout<<j;
        for(int i=1;i<nums.size();i++){
            if(j==nums[i]){
               j=nums[i];
             count1++;
            }
            // else if(j!=nums[i])
           else {
            count2=count1;
            // count1=1;
                j=nums[i];

            }
            if(count1>count2){
                cout<<"COUNT_1 "<<count1<<<endl;
            }
        }
        
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