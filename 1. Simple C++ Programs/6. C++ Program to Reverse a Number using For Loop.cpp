// C++ Program to Reverse a Number using For Loop
 
#include<iostream>
using namespace std;
 
int main()
{
    int num, rev = 0;
    cout << "Enter a number : ";
    cin >> num;
    for (int temp = num; temp != 0; temp /= 10)
    {
        int r = temp % 10;
        rev = rev * 10 + r;
    }
    cout << "\nThe reverse of " << num << " is : " << rev;
    return 0;
}
