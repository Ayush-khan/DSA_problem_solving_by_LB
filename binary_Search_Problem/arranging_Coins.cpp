// You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

// Given the integer n, return the number of complete rows of the staircase you will build.
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int arrangeCoins(int n)
    {
        int count = 0;
        int sum = 0;
        // logic
        for (int i = 1; i <= n; i++)
        {
            if (n == 0)
            {
                return count;
            }
            else if (n == 1)
            {
                return 1;
            }
            else if (sum < n)
            {
                cout << "before_Sum= " << sum << endl;
                sum += i;
                cout << "sum= " << sum << endl;
            }
            else if (sum == n)
            {
                cout << "HELLOW WE are inside sum==n" << sum << "=" << n << endl;
                cout << "KELLO" << count << endl; 
                return count;
            }
            else if (sum > n)
            {
                // cout<<"THGIDDDDD"<<endl;
                return count - 1;
            }

            count++;
        }
    }
};
int main()
{
    // 
    Solution s1;
    int row;
    cout << "Enter a number of rows" << endl;
    cin >> row;
    int result = s1.arrangeCoins(row);
    cout << "THe result is: " << result << endl;
}