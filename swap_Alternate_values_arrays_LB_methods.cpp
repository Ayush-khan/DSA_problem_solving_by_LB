#include<iostream>
using namespace std;
class Solution{
    public:
    void swapAlternate(int arr[],int Size){
for(int i=0;i<Size;i+=1){
    if(i+1<Size){
        swap(arr[i],arr[i+1]);
    }
}
    }
};
int main()
{
    int Size;
    cout << "enter the size of an array" << endl;
    cin >> Size;
    int arr[Size];
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < Size; i++)
    {
        cin >> arr[i];
    }
    cout << "The Element of the array is:" << endl;
    for (int i = 0; i < Size; i++)
    {
        cout << "arr[" << i << "]= " << arr[i] << "  ";
    }
    Solution s1;
    s1.swapAlternate(arr,Size);
    cout<<endl<<"After swaping the Alternate elements"<<endl;
     for (int i = 0; i < Size; i++)
    {
        cout << "arr[" << i << "]= " << arr[i] << "  ";
    }
}
