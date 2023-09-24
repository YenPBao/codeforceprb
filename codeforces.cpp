#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int turn1, turn2;
        if (c % 2 == 0)
        {
            turn1 = c / 2 + a;
            turn2 = c / 2 + b;
        }
        else
        {
            turn1 = c / 2 + 1 + a;
            turn2 = c / 2 + b;
        }
        if (turn1 > turn2)
        {
            cout << "First\n";
        }
        else
        {
            cout << "Second\n";
        }
    }
}