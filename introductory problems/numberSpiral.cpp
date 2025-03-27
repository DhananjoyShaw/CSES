#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long row, col;
    cin >> row >> col;

    long long result;

    if (row > col)
    {
        if (row % 2 == 1)
        {
            result = (row - 1) * (row - 1) + col;
        }
        else
        {
            result = row * row - col + 1;
        }
    }
    else
    {
        if (col % 2 == 1)
        {
            result = col * col - row + 1;
        }
        else
        {
            result = (col - 1) * (col - 1) + row;
        }
    }

    cout << result << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
