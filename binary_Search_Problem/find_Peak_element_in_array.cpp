#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
class Solution{
    public:
        int peakIndexInMountainArray(vector<int>& arr) {
            // way to find maximum number
        // sort(arr.begin(),arr.end());
        // int max=arr.size()-1;
        // return arr[max];
        int s=0;
        int e=arr.size()-1;
        while(s<e){
            int mid=(s+e)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
                // e=mid;
            }
            else{
                e=mid;
            }
        }
        return s;
    }

};
int main(){
    vector<int>v1={0,1,4,6,7,25,22,11,1,0};
    Solution s1;
   int ans= s1.peakIndexInMountainArray(v1);
   cout<<"THe index is:["<<ans<<"]= "<<v1[ans]<<endl;
}