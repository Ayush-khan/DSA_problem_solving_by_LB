#include <iostream>
using namespace std;
class solution
{
public:
    int swap(int arr[], int size)
    {    int j=size-1;
    cout<<"******"<<arr[j]<<"*****"<<endl;
        for(int i=0;i<size;i++){
            // For the odd numbers of values in the array
            if(size/2!=0){
                if(i<j)
                { cout<<"____"<<arr[i];
                 arr[i]=arr[j];
                //    i++;
                   j--;
                }

        }
        else{
            // For the even numbers of the values in the array
            if(i!=j){
                 arr[i]=arr[j];
                //    i++;
                   j--;
            }

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
    solution s1;
    s1.swap(arr,Size);
    cout<<endl<<"After swaping the elements"<<endl;
     for (int i = 0; i < Size; i++)
    {
        cout << "arr[" << i << "]= " << arr[i] << "  ";
    }
}
