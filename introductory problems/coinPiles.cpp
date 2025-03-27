#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m;
    cin >> n >> m;

    if ((n + m) % 3 == 0 && 2 * min(n, m) >= max(n, m))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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
