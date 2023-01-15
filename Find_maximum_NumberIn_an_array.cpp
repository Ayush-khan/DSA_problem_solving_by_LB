#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
int Find_Max_Element(int arr[],int Size){
    int max=INT32_MIN;
    // for(int i=0;i<Size;i++){
    //     if(max<arr[i]){
    //         max=arr[i];
    //     }
        
    // }
    int s=0;
    int e=Size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(max<arr[mid]){
            max=arr[mid];
            s=mid+1;

        }
    }
    return max;
}
int Find_Min_Element(int arr[],int Size){
    int max=INT32_MAX;
    for(int i=0;i<Size;i++){
        if(max>arr[i]){
            max=arr[i];
        }
        
    }
    return max;
}

};
int main()
{
    int Size;
    cout << "Enter the size of an array" << endl;
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
    int max_Element=s1.Find_Max_Element(arr,Size);
    cout<<endl<<"The Maximum Element in an array is:"<<endl;
     cout<<"Maximum_Element : "<<max_Element<<endl;
      int min_Element=s1.Find_Min_Element(arr,Size);
    cout<<endl<<"The Maximum Element in an array is:"<<endl;
     cout<<"Maximum_Element : "<<min_Element<<endl;
    //  for (int i = 0; i < Size; i++)
    // {
    //     cout << "arr[" << i << "]= " << arr[i] << "  ";
    // }
}