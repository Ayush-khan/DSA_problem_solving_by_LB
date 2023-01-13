#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// while
class Solution
{
public:
    int Binary_search(int arr[], int Size, int element)
    {
        int s = 0, e = Size - 1;
        int mid = (s + e) / 2;
        
        // int m=(s+e)/2;

        while (s <= e)
        {

            if (element == arr[mid])
            {   
                return mid;
            }
            // codition if element is not present so its possition in which it put
            // if(element>arr[mid] && element<arr[mid+1]){
            //     return mid+1;
            // }
            // ****** Go to right bala part********
            else if (element > arr[mid])
            {
                s = mid + 1;
            }
            // ***** Go to left bala part*********
            else if (element < arr[mid])
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2; // isko solve karenge to (s+e)/ 2 hi ayega but problem ye hai jaisa ki hum jante hai ki int ki limit rheti hai 2 ki power -31 plus 1 se lekar 2 ki power +31 plus 1 tak yaddi hum mid mai inhe bhi add kar le to ye limit se bhar chala gaya to problem ho gayi isiliye apan ne mathsmatics lagai hai kyuki ab apan minou kar rhe hai indirectly
        }
        return -1;

        // int i, j;
        // i = Size / 2;
        // // cout << "*******<<" << arr[i] << endl;
        // if (arr[i] >= element)
        // {
        //     j = i;
        //     cout << "Element is lesser than the middle value:" << endl;
        //     while (j >= 0)
        //     {
        //         if (arr[j] == element)
        //         {
        //             // cout << "Index of an element is:" << endl;
        //             // cout << "Arr[" << j << "]= " << arr[j];
        //             return j;
        //         }
        //         j--;
        //     }
        // }
        // else
        // {
        //     cout << "Element is greater than the middle value:" << endl;
        //     if (arr[i] <= element)
        //     {
        //         j = i;
        //         while (j <= Size)
        //         {
        //             if (arr[j] == element)
        //             {
        //                 // cout << "Index of an element is:" << endl;
        //                 // cout << "Arr[" << j << "]= " << arr[j];
        //                 return j;
        //             }

        //             j++;
        //         }
        //         // while(i)
        //     }
        // }
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
         << "Enter the element which you want to find:" << endl;
    cin >> element;
    Solution s1;
    // int find=
    int index = s1.Binary_search(arr, Size, element);
    if (index == -1)
    {
        cout << "Element is not found" << endl;
    }
    else
    {
        cout << "Index of an element is:" << endl;
        cout << "Arr[" << index << "]= " << arr[index];
    }
    // cout<<endl<<"The element is: "<<find<<endl;
    //  for (int i = 0; i < Size; i++)
    // {
    //     cout << "arr[" << i << "]= " << arr[i] << "  ";
    // }
}
