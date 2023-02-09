// Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst nums1 and nums2, return -1.
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        int getCommon(vector<int>& nums1, vector<int>& nums2) {
            int notFound=1;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    notFound=0;
                    return nums1[i];
                }
                // else{
                //     return -1;
                // }
            }
        }
        if(notFound!=0){
            return -1;
        }

    }
};
int main(){
    vector<int> v1={1,6,7,8};
    vector<int> v2={2,3,4,5}; 
    Solution s1;
    int result=s1.getCommon(v1,v2);
    cout<<"The result is: "<<result;
}
