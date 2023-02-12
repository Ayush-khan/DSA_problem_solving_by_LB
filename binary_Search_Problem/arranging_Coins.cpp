// You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

// Given the integer n, return the number of complete rows of the staircase you will build.
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    int arrangeCoins(int n){
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
              if(n==0 || n==1){
                return 0;
            }
            else if(sum==n ){
                cout<<"KELLO"<<count<<endl;
                return count;
            }
            else if(sum<n){
                  sum+=i; 
            }
            else if(sum>n){
                return count-1;
            }
           
            count++;
        }

    }
};
int main(){
    Solution s1;
    int row;
    cout<<"Enter a number of rows"<<endl;
    cin>>row;
   int result= s1.arrangeCoins(row);
   cout<<"THe result is: "<<result<<endl;

}