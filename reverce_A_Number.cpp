#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class Solution
{
public:
    int palindrom(int x)
    {
        int reverse = 0;
        int count = 0;

        if (x < 0)
        {
            x = -(x);
            count++;
        }
        int i = x;
        while (i > 0)
        {
            if (reverse > INT32_MAX / 10 || reverse < INT32_MIN / 10)
            {
                return 0;
            }
            reverse = reverse * 10 + i % 10;
            i = i / 10;
        }

        if (count == 1)
        {
            reverse = -1 * reverse;
        }
        return reverse;
    }
};
class solution {
public:
    int reverse(int x) {
        int reverse = 0 ; 
        while(x!=0){
            int lastdigit = x%10 ; 
            if(reverse > INT32_MAX/10 || reverse < INT32_MIN/10){
                return 0 ; 
            }
            reverse = (reverse*10)+ lastdigit ; 
            x = x/10 ;
        }
        return reverse ; 
    }
};
int main()
{
    Solution s1;
    int x;
    cout << "Plz Enter a number" << endl;
    cin >> x;
    // cout << x << endl;
    int ans = s1.palindrom(x);
    cout << "Reverse number is = " << ans << endl;
}