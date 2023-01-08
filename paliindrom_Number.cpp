#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    bool palindrom(int num){
      // string test=to_string(num);
    //   string reverse=
    int i=num;
    int count=0;
    int remender=0;
    
    // count the size of number.
    while(i>0){
      remender=remender*10+i%10;
       i=i/10;
    //      cout<<num ;
    //   cout<<remender<<endl;
    //   count++; 
    //    i=i/10;
          
    //       }
    //       int arr[count];
        //   problem is that how we can enter the values in an array:
        //   for(int l=0;l<count;l++){
        //      cin>>arr[i];
          }
      // cout<<remender<<"******"<<endl;
      return remender;
    }
};
int main(){
    Solution s1;
    int num;
    cout<<"Plz Enter a number"<<endl;
    cin>>num;
    cout<<num<<endl;
    int ans=s1.palindrom(num);
    cout<<" "<<ans<<endl;
    if(ans!=num){
        cout<<"Number is not palindrom"<<endl;
    }
    else{
        cout<<"Nuber is palindrom"<<endl;
    }
}