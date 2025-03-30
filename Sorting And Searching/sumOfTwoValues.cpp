#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    int left = 0, right = n - 1;
    while (left < right)
    {
        long long sum = a[left].first + a[right].first;

        if (sum == x)
        {
            cout << a[left].second + 1 << " " << a[right].second + 1 << endl;
            return;
        }
        else if (sum < x)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << "IMPOSSIBLE" << endl;
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
