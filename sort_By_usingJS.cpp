#include<iostream>
using namespace std;
// ****This is the function of sorting is js but there callBack function do their job this iis the main function****
int main(){
    int arr[]={23,45,11,1,2,3,432};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);){
        if(arr[i]-arr[i+1]<=0)
        {
            i++;
        }
        else
        {
            // else statement
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i++;
            
        }
    }
     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
     }
}