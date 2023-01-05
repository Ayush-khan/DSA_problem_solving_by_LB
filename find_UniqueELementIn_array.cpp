#include<iostream>
using namespace std;
class Solution{
    public:
    int Find_Unique_Element(int arr[],int Size){
        int uniqe=0;
        for(int i=0;i<Size;i++){
            uniqe=uniqe^arr[i];
            cout<<"*******"<<uniqe<<"******"<<endl;
        }
        return uniqe;
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
    int unique=s1.Find_Unique_Element(arr,Size);
    cout<<endl<<"The uniqe Element in an array is:"<<endl;
     cout<<"Unique_Element : "<<unique<<endl;
    //  for (int i = 0; i < Size; i++)
    // {
    //     cout << "arr[" << i << "]= " << arr[i] << "  ";
    // }
}