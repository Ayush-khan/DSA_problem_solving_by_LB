#include<iostream>
using namespace std;
class Solution{
    public:
    int swapAlternate(int arr[], int size){
  
     int next_start=1;
     int end=size-1;
     int i=0;
      int j=1;
    //  while(start<=end){
        for(;i<size-1 || j<size; i++, j++){
        // cout<<"";
    //    int i=start;
        if(size/2!=0){
            int temp=arr[i];
            int temp1=arr[j];
            arr[i]=temp1;
            arr[j]=temp;
            i++;
            j++;
            // start++;
        }
       
        // int temp=arr[start];
        // arr[start]=arr[start+1];
        // arr[start+1]= temp;

        // arr[start]=arr[start+1];
        // arr[start+1]=temp;
        // int temp1=arr[start+1];
        // cout<<endl<<"Temp="<<temp<<" "<<" Temp1="<<temp1<<endl;
        // arr[start]=temp1;
        // arr[temp1]=temp;
        // end--;
        // start++;
        // next_start++;
     }
    //  cout<<"I="<<i<<endl;
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