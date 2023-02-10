#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
class Solution{
    public:
        int peakIndexInMountainArray(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int max=arr.size()-1;
        return arr[max];
    }

};
int main(){
    vector<int>v1={0,10,3,2,1};
    Solution s1;
   int ans= s1.peakIndexInMountainArray(v1);
   cout<<"THe answer is: "<<ans<<endl;
}