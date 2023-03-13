// find square root of a number program
#include <iostream>
using namespace std;
class solution
{
public:
    int find_square_ROOT(int num)
    {
        int s = 0;
        int e = num;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (mid*mid == num)
            {
                return mid;
            }
            else if (mid * mid > num)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = (s + e) / 2;
        }
        return e;
    }
};
int main()
{
    solution s1;
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    int root = s1.find_square_ROOT(num);
    cout << "Square root of the number " << num << " is: " << root << endl;
}