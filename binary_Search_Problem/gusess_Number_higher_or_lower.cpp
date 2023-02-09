// We are playing the Guess Game. The game is as follows:

// I pick a number from 1 to n. You have to guess which number I picked.

// Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

// You call a pre-defined API int guess(int num), which returns three possible results:

// -1: Your guess is higher than the number I picked (i.e. num > pick).
// 1: Your guess is lower than the number I picked (i.e. num < pick).
// 0: your guess is equal to the number I picked (i.e. num == pick).
// Return the number that I picked.
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution{
    public:
    int guessNumber(int n) {
        int s=0;
        int e=20;
        int mid=(s+e)/2;
        while(s<=e){
         if(mid>s){
            
          }
        }
    }
};
int main(){
    Solution s1;
    // int n=math.rand();
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    s1.guessNumber(n);
}