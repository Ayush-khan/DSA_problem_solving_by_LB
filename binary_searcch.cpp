#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
// while
class Solution
{
public:
    int Binary_search(int arr[], int Size, int element)
    {
        int i, j;
        i = Size / 2;
        // cout << "*******<<" << arr[i] << endl;
        if (arr[i] >= element)
        {
            j = i;
            cout << "Element is lesser than the middle value:" << endl;
            while (j >= 0)
            {
                if (arr[j] == element)
                {
                    // cout << "Index of an element is:" << endl;
                    // cout << "Arr[" << j << "]= " << arr[j];
                    return j;
                }
                j--;
            }
        }
        else
        {
            cout << "Element is greater than the middle value:" << endl;
            if (arr[i] <= element)
            {
                j = i;
                while (j <= Size)
                {
                    if (arr[j] == element)
                    {
                        // cout << "Index of an element is:" << endl;
                        // cout << "Arr[" << j << "]= " << arr[j];
                        return j;
                    }
                    j++;
                }
                // while(i)
            }
        }
    }
};

int main()
{
    int Size, element;
    cout << "enter the size of an array" << endl;
    cin >> Size;
    int arr[Size];
    cout << "Enter the elements in the array" << endl; // array must be enter in the sorted order
    for (int i = 0; i < Size; i++)
    {
        cin >> arr[i];
    }
    cout << "The Element of the array is:" << endl;
    for (int i = 0; i < Size; i++)
    {
        cout << "arr[" << i << "]= " << arr[i] << "  ";
    }
    cout << endl
         << "Enter the element which you want to find:"<<endl;
    cin >> element;
    Solution s1;
    // int find=
    int index=s1.Binary_search(arr, Size, element);
     cout << "Index of an element is:" << endl;
                        cout << "Arr[" << index<< "]= " << arr[index];
    // cout<<endl<<"The element is: "<<find<<endl;
    //  for (int i = 0; i < Size; i++)
    // {
    //     cout << "arr[" << i << "]= " << arr[i] << "  ";
    // }
   
}
