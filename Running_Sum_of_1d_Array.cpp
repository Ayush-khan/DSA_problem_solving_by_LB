#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {   
        vector<int>v1;
         vector<int>::iterator it=v1.begin();
        int i,sum=0;
        int j=1;
        while(i<nums.size()){
            sum=sum+nums[i];
            v1.push_back(sum);
            // v1[i]=sum;
            i++;
        }
         for (; it < nums.end(); it++)
    {
        cout << *it << " ";
        // cin >> arr[i];
    }
        return nums;
    }
};
int main()
{
    int Size, element;
    vector<int> v1 = {1, 2, 3, 4, 5};
    // cout << "enter the size of an array" << endl;
    // cin >> Size;
    // int arr[Size];
    vector<int>::iterator it = v1.begin();
    cout << "Enter the elements in the Vector" << endl; // array must be enter in the sorted order
    for (; it < v1.end(); it++)
    {
        cout << *it << " ";
        // cin >> arr[i];
    }
    // cout << "The Element of the array is:" << endl;
    // for (int i = 0; i < Size; i++)
    // {
    //     cout << "arr[" << i << "]= " << arr[i] << "  ";
    // }
    // cout << endl
    //      << "Enter the element which you want to find:"<<endl;
    // cin >> element;
    Solution s1;
    // int find=
    s1.runningSum(v1);

    //  cout << "Index of an element is:" << endl;
    //                     cout << "Arr[" << index<< "]= " << arr[index];
    // cout<<endl<<"The element is: "<<find<<endl;
    //  for (int i = 0; i < Size; i++)
    // {
    //     cout << "arr[" << i << "]= " << arr[i] << "  ";
}
