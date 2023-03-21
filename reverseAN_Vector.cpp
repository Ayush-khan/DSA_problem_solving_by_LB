#include<iostream>
#include<vector>
using namespace std;
// solution class
class Solution
{
public:
    int reverseElement(vector<int> &nums)
    {   int i=0;

    // use vector to reverse an elements 
        auto it=nums.rbegin();
        while(it!=nums.rend()){
            cout<<"Vector["<<i<<"]= "<<*it<<"  ";
            it++;
            i++;
        }
    }
};
int main(){
    vector<int> num={2,3,7,1,4,-12,43};
    Solution s1;
    s1.reverseElement(num);
    
}