/*
!The Block Game

!Problem Code: PALL01

The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9. These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0. Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. We call such numbers palindrome.

Ash happens to see this game and wants to simulate the same in the computer. As the first step he wants to take an input from the user and check if the number is a palindrome and declare if the user wins or not.

! Input

The first line of the input contains T, the number of test cases. This is followed by T lines containing an integer N.

!Output

For each input output "wins" if the number is a palindrome and "loses" if not, in a new line.

!Constraints

1<=T<=20
1<=N<=20000

!Input:

3
331
666
343

!Output:

loses
wins
wins

*/
#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        int num = N, rn = 0, r = 0;
        while (num != 0)
        {
            r = num % 10;
            rn = (rn * 10) + r;
            num = num / 10;
        }
        if (N == rn)
            cout << "Wins" << endl;
        else
            cout << "Loses" << endl;
    }
    return 0;
}