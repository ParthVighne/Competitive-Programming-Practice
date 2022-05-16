/*
!Get Lowest Free

!Problem Code: SALE

Chef goes to the supermarket to buy some items. Luckily there's a sale going on under which Chef gets the following offer:

If Chef buys 3 items then he gets the item (out of those 3 items) having the lowest price as free.
For e.g. if Chef bought 3 items with the cost 6, 2 and 4, then he would get the item with cost 2 as free. So he would only have to pay the cost of the other two items which will be 6+4=10.

Chef buys 3 items having prices A, B and C respectively. What is the amount of money Chef needs to pay?

!Input Format

The first line will contain an integer T - number of test cases. Then the test cases follow.
The first and only line of each test case contains three integers A,B,C - the prices of the items bought by Chef.

!Output Format

For each test case, output the price paid by Chef.

!Constraints

1≤T≤100
1≤A,B,C≤10

!Sample Input 1

3
6 2 4
3 3 3
8 4 4

!Sample Output 1

10
6
12

!Explanation

Test case-1: Explained in the problem statement.

Test case-2: Since all the three items have the same price, Chef will get one of them free and will have to pay the cost of the other two items which will be 3+3=6.

Test case-3: Chef will get one of the items having price 4 as free and will have to pay the cost of the other two items which will be 8+4=12.
*/
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if (A < B && A < C) // if A is the smallest
            cout << B + C << endl;
        else if (B < C) // if B is the smallest
            cout << A + C << endl;
        else // if C is the smallest
            cout << A + B << endl;
    }
}