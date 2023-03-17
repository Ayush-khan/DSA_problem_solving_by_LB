// 34.leedcode: Find the First and Last Position of Element in Sorted Array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std
//***** ye rahi error kyuki ye complete nahi hua abhi tak isiliye error banai hai
// while
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1;
        int mid = (s + e) / 2;
        int star=-1;
        int end = -1;
        vector<int> range;
        int count = 0;
        // vector<int>:: iterator it;
        while (s <= e)
        {

            // if (target == nums[mid])
            // {
            //      cout<<nums[mid]<<"first if "<<endl;
            //     if(target==nums[mid-1]){
            //         cout<<nums[mid-1]<<"second if mid-1 "<<endl;
            //         range.push_back(mid);
            //         nums.erase(nums.begin()+mid);
            //         //    vector<int>:: iterator it=mid;
            //         mid--;
            //     }
            //     else{
            //         cout<<nums[mid]<<"ELse bala mid "<<endl;
            //         range.push_back(mid);
            //         nums.erase(nums.begin()+mid);

            //     }
            // if(nums[mid-1])
            // return mid;
            // }
            // codition if element is not present so its possition in which it put
            // if(element>arr[mid] && element<arr[mid+1]){
            //     return mid+1;
            // }

            if (target == nums[mid])
            {
                star = mid;
                e = mid - 1;
            }

            // ****** Go to right bala part********
            // else if (target > nums[mid])
            // {
            //     s = mid + 1;
            // }
            // ***** Go to left bala part*********
            else if (target < nums[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2; // isko solve karenge to (s+e)/ 2 hi ayega but problem ye hai jaisa ki hum jante hai ki int ki limit rheti hai 2 ki power -31 plus 1 se lekar 2 ki power +31 plus 1 tak yaddi hum mid mai inhe bhi add kar le to ye limit se bhar chala gaya to problem ho gayi isiliye apan ne mathsmatics lagai hai kyuki ab apan minou kar rhe hai indirectly
        }
        while (s <= e)
        {
            if (target == nums[mid])
            {
                end = mid;
                s = mid + 1;
            }

            // ****** Go to right bala part********
            // else if (target > nums[mid])
            // {
            //     s = mid + 1;
            // }
            // ***** Go to left bala part*********
            else if (target > nums[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid + 1;
            }
            mid = s + (e - s) / 2; // isko solve karenge to (s+e)/ 2 hi ayega but problem ye hai jaisa ki hum jante hai ki int ki limit rheti hai 2 ki power -31 plus 1 se lekar 2 ki power +31 plus 1 tak yaddi hum mid mai inhe bhi add kar le to ye limit se bhar chala gaya to problem ho gayi isiliye apan ne mathsmatics lagai hai kyuki ab apan minou kar rhe hai indirectly
        }
        cout<<" "<<end<<endl;
        range.push_back(star);
        range.push_back(end);
        return range;
    }   

};

int main()
{
    int Size, element;
    // cout << "enter the size of an array" << endl;
    // cin >> Size;
    vector<int> v1 = {5, 7, 7, 8, 8, 8, 8, 8, 10};
    cout << "Enter the elements in the array" << endl; // array must be enter in the sorted order
    cout << "The Element of the array is:" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << "arr[" << i << "]= " << v1[i] << "  ";
    }
    cout << endl
         << "Enter the element which you want to find:" << endl;
    cin >> element;
    Solution s1;
    // int find=
    vector<int> index = s1.searchRange(v1, element);
    cout << "Indexes mil gaye first and last : " << endl;
    for (int i = 0; i < index.size(); i++)
    {
        cout << index[i] << " ";
    }
    // if{
    //     cout << "Element is not found" << endl;
    // }
    // else
    // {
    //     cout << "Index of an element is:" << endl;
    //     cout << "Arr[" << index << "]= " << arr[index];
    // }
    // cout<<endl<<"The element is: "<<find<<endl;
    //  for (int i = 0; i < Size; i++)
    // {
    //     cout << "arr[" << i << "]= " << arr[i] << "  ";
    // }
}
