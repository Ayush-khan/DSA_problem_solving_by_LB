#include <iostream>
using namespace std;
class Solution
{
public:
    float mySqrt(int x)
    {     int i = x*10;
    // int perfect=x;
        x=x*10000;
         
        // cout<<" X = "<<x;
        // ******** My solution doest not work time exced
        //  if()
             for(i;i*i<=x;i++){
               cout<<"i= "<<i<<" "; }
               i--;
               return i;
        }
        // int l = 1;
        // int h = x;
        // long long int mid;
        // int ans = 0;
        // while (l <= h)
        // {
        //     mid = l + (h - l) / 2;
        //     long long int sqr = mid * mid;
        //     if (sqr == x)
        //         return mid;
        //     else if (sqr < x)
        //     {
        //         ans = mid;
        //         l = mid + 1;
        //     }
        //     else
        //     {
        //         h = mid - 1;
        //     }
        // }
        // return ans;
    // }
 };

    int main()
    {
        Solution s1;
        int num;
        cout << "Enter the number" << endl;
        cin >> num;
        float retun = s1.mySqrt(num);
        retun=retun/100;
        cout << "Square root of the number is: " << retun << endl;
    
    }