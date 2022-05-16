/*
!Small factorials

!Problem Code: FCTRL2

A tutorial for this problem is now available on our blog. Click here to read it.
You are asked to calculate factorials of some small positive integers.

! Input

An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

!Output

For each integer n given at input, display a line with the value of n!

!Example

Sample input:

4
1
2
5
3

Sample output:

1
2
120
6
*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        cout << factorial(N) << endl;
    }
    return 0;
}