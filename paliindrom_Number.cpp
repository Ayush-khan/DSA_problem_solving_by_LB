#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    bool palindrom(int num){
      string test=to_string(num);
    //   string reverse=
    int i=num;
    int count=0;
    while(i>0){
      int remender=i%10;
       
         cout<<num ;
      cout<<remender<<endl;
      count++; 
       i=i/10;
          
          }
          int arr[count];
        //   problem is that how we can enter the values in an array:
        //   for(int l=0;l<count;l++){
        //      cin>>arr[i];
        //   }
      cout<<count<<"******"<<endl;
    }
};
int main(){
    Solution s1;
    int num;
    cout<<"Plz Enter a number"<<endl;
    cin>>num;
    int ans=s1.palindrom(num);
    if(ans){
        cout<<"Number is palindrom"<<endl;
    }
    else{
        cout<<"Nuber is not palindrom"<<endl;
    }
}