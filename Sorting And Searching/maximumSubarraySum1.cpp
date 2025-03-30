#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long currSum = 0;
    long long maxi = LLONG_MIN;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < a.size(); i++)
    {
        currSum = max(a[i], currSum + a[i]);

        /*

        if (currSum < 0)
            currSum = 0;

        this works either for all positive numbers or both positive and negative numbers but not for only negative numbers.

        */

        maxi = max(maxi, currSum);
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