#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;

    vector<ll> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, count = 0;

    while (i < n && j < m)
    {
        // Apartment too small, move to the next one
        if (b[j] < a[i] - x)
        {
            j++;
        }
        // Apartment too big, move to the next applicant
        else if (b[j] > a[i] + x)
        {
            i++;
        }
        // Found a suitable apartment
        else
        {
            count++;
            i++;
            j++;
        }
    }

    cout << count << endl;
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
