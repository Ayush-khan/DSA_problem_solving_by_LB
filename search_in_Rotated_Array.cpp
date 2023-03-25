// ERROR AA RHI HAI MIDBO JAAN PUCH KAR KI GAYI HAI std mai kyuki int main mai kuch note likha hai pad lena
#include<iostream>
#include<vector>
using namespace std
class Solution {
public:
    int search(vector<int>& nums, int target) {
         int s=0;
         int e=nums.size()-1;
         int mid=s=(e-s)/2;
         while(s<=e){
            if(nums[mid]==target){
                return mid;
            } 
            else if(nums[s]==target  ){
                return s;
            }
            else if(nums[e]==target){
                return e;
            }
         
            else if(nums[s]>target){
                s=mid;
            } 
        //    else if(nums[e]<target)
           else {
                e=mid;
            }
           
            mid=(s+e)/2;
         }
        //  mid=-1;
    }
};
// main function
int main()
{          //mid indexes ke baad kaamkar rha hai mid index se phle kaam nahi kar rha abhi ye program
    int target;
    vector<int> v1={4,5,6,7,0,1,2,3};
    cout << "Enter the size of an array" << endl;
    cin >> target;
    Solution s1;
    int found_Element=s1.search(v1,target);
    cout<<endl<<"The targeted Element in an array is:"<<endl;
     cout<<"targeted_Element : "<<found_Element<<endl;
    
}