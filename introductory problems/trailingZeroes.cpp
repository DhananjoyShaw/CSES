#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long ans = 0;
    int divisor = 5;

    while (n >= divisor)
    {
        ans += n / divisor;
        divisor *= 5;
    }

    cout << ans << endl;
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
