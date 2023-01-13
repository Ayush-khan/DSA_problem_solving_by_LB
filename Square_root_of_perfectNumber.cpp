#include <iostream>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        int i = 0;
        // int perfect=x;
        // x=x*10000;
        // ******** My solution doest not work time exced
        for (i; i * i <= x; i++);
        i--;
        return i;
    }
};

int main()
{
    Solution s1;
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    int retun = s1.mySqrt(num);
    cout << "Square root of the number is: " << retun << endl;
}