#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> ans(n, 0);

    if (n == 1)
    {
        cout << "1";
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        int i = 0, m = 2;
        while (i < n)
        {
            ans[i] = m;
            m += 2;
            i++;

            if (i == (n / 2))
            {
                m = 1;
            }
        }

        for (size_t i = 0; i < ans.size(); i++)
        {
            if (i > 0)
                cout << " ";

            cout << ans[i];
        }
    }

    cout << endl;

    return 0;
}
