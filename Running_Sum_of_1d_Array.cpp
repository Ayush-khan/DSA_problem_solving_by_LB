#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// class of solution
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> v1;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            // cout << sum << " ";
            v1.push_back(sum);
        }
        //     vector<int>::iterator it=v1.begin();
        //      for (; it < nums.end(); it++)
        // {
        //     cout << *it << " ";
        // }
        return v1;
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
    cout << "The elements in the Vector" << endl; // array must be enter in the sorted order
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
    vector<int>v2=s1.runningSum(v1);
    vector<int>::iterator it1=v2.begin();
    cout<<endl<<"Array after sum of its each element is:"<<endl;
    while(it1!=v2.end()){
        cout<<*it1<<" ";
        it1++;
    }

    //  cout << "Index of an element is:" << endl;
    //                     cout << "Arr[" << index<< "]= " << arr[index];
    // cout<<endl<<"The element is: "<<find<<endl;
    //  for (int i = 0; i < Size; i++)
    // {
    //     cout << "arr[" << i << "]= " << arr[i] << "  ";
}
