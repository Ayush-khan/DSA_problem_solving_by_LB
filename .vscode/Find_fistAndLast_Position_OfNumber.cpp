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
        int count = 0;
        while (s <= e)
        {
                // ******* Logic not working properly******
            // if (element == arr[mid])
            // {
            //     count++;
            //     if (count == 1)
            //     {
            //         cout << "First occurence of a number " << arr[mid] << " is= " << mid << endl;
            //     }
            //     if (element != arr[mid + 1])
            //     {
            //         cout << "Last occurence of " << arr[mid] << " is= " << mid<<endl;
            //     }
            //     // return mid;
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
    // else
    // {
    //     cout << "Index of an element is:" << endl;
    //     cout << "Arr[" << index << "]= " << arr[index];
    // }
    
}
