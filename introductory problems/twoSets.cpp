#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    if (sum % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        cout << "YES\n";

        vector<long long> a, b;
        sum /= 2;

        while (n)
        {
            if (sum - n >= 0)
            {
                a.push_back(n);
                sum -= n;
            }
            else
            {
                b.push_back(n);
            }
            n--;
        }

        cout << a.size() << "\n";
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";

        cout << b.size() << "\n";
        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
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
