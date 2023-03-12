#include <iostream>
#include <string>
using namespace std;
// Program to fing the palindrome
class Solution
{
public:
  bool palindrom(int num)
  {

    int count = 0;
    int remender = 0;
    if (num < 0)
    {
      count++;
      num = -1 * num;
    }
    int i = num;
    while (i > 0)
    {
      remender = remender * 10 + i % 10;
      i = i / 10;
    }
    if (num == remender)
    {
      cout << remender << endl;
      return true;
    }
    else if (count == 1)
    {
      return false;
    }
    else
    {
      cout << remender << endl;
      return false;
    }
  }
};
int main()
{
  Solution s1;
  int num;
  cout << "Plz Enter a number" << endl;
  cin >> num;
  // cout<<s1.palindrom(num);
  int ans = s1.palindrom(num);
  // cout<<" "<<ans<<endl;
  if (ans == true)
  {
    cout << "Number is palindrom" << endl;
  }
  else
  {
    cout << "Nuber is not  palindrom" << endl;
  }
}