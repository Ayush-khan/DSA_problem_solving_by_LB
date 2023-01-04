#include<iostream>
using namespace std;
int reverse_Array(int arr[],int size){
    //gives us the actual size of an array
    // int k=sizeof(arr)/sizeof(arr[0]);
    // cout<<k;
 for(int i=size-1;i>=0;i--){
    cout<<"arr["<<i<<"]= "<<arr[i]<<"  ";
 }

}
int main(){
    int Size;
    cout<<"enter the size of an array"<<endl;
    cin>>Size;
    int arr[Size];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<Size;i++){
        cin>>arr[i];
    }
    cout<<"The Element of the array is:"<<endl;
     for(int i=0;i<Size;i++){
        cout<<"arr["<<i<<"]= "<<arr[i]<<"  ";
    }
    cout<<endl<<"The Element after reversing the element of the array"<<endl;
   reverse_Array(arr,Size);
     
    // gives us the actual size of an array
    // int k=sizeof(arr)/sizeof(arr[0]);
    // cout<<k;
    
}