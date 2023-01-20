// Given an array arr with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
//
// You must solve this problem without using the library's sort function.
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void sortColors(int arr[], int size)
    {
        int i = 0;
        int j = 1;
        // int Size = sizeof(arr) / sizeof(arr[0]);

        for (; i < size - 1;i++)
        {
            for (j=i+1; j < size;j++)
            {
                if (arr[i] >= arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int i = 0; i < size; i++)
        {

            cout << arr[i] << " ";
        }
    }
};
int main()
{
    // vector<int> v1 = {2, 0, 2, 1, 1, 0};
    int arr[] = {2, 0, 2, 1, 1, 0};
    Solution s1;
    int siz;
    cout << " Starting..."<<endl;
            s1.sortColors(arr, 6);
}