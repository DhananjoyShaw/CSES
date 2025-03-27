#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int currLength = 1;
    int maxi = 1;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            currLength++;
            maxi = max(maxi, currLength);
        }
        else
        {
            currLength = 1;
        }
    }

    cout << maxi << endl;
}

int main()
{
    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
