// 350  Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
    // Some error detected now at this time 
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {    
        sort(nums1.begin(), nums1.end());
        for (int i = 0; i < nums1.size(); i++)
        {
            cout << nums1[i] << " ";
        }
        cout << endl;
        sort(nums2.begin(), nums2.end());
        for (int i = 0; i < nums2.size(); i++)
        {
            cout << nums2[i] << " ";
        }
        cout << endl;
        vector<int> v1;
        int minSize = (nums1.size()) >= (nums2.size()) ? (nums2.size()) : (nums1.size());
        cout << "THe size of larger array is: " << minSize<< endl;
        for (int a = 0, b = 0; a < nums1.size() && b < nums2.size();)
        {
            if (nums1[a] == nums2[b])
            {
                v1.push_back(nums1[a]);
                // if (nums1[a] == nums1[a + 1])
                // {
                //     a++;
                //     if(nums2[b]==nums2[b+1]){
                //         b++;
                //     }
                // }
                a++;
                b++;
            }
            else{
                
                a++;
                // b++;
            }
            
            // for (int b = 0; b < nums2.size();b++ )
            // {
            //     if (nums1[a] == nums2[b])
            //     {
            //     // { cout<<"HELLO inside the second for loop"<<" ";
            //         v1.push_back(nums1[a]);
            //         if(nums1[a]==nums1[a+1]){
            //         a++;
            //         }

            //     }
            // }
        }
        return v1;
    }
};
int main()
{
    cout << "WE are started now " << endl;
    Solution s1;
    vector<int> v1 = {9,65,4,3,2,7,7,7,5,54,1,2,3,4,5,6,7,8,9};
    vector<int> v2 = {8,1,3,2,4,5,6,7,8,65,54,2};
    vector<int> result = s1.intersect(v1, v2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
