#include <bits/stdc++.h>
using namespace std;

void helper(int i, vector<long long> &a, long long sum1, long long sum2, long long &mini)
{
    if (i == a.size())
    {
        mini = min(mini, abs(sum1 - sum2));
        return;
    }

    helper(i + 1, a, sum1 + a[i], sum2, mini);
    helper(i + 1, a, sum1, sum2 + a[i], mini);
}

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long mini = LLONG_MAX;
    long long sum1 = 0;
    long long sum2 = 0;

    helper(0, a, sum1, sum2, mini);

    cout << mini << endl;
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
