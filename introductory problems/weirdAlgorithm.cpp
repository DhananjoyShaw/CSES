#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> ans;
    ans.push_back(n);

    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else if (n % 2 == 1)
        {
            n = (n * 3) + 1;
        }
        ans.push_back(n);
    }

    for (size_t i = 0; i < ans.size(); i++)
    {
        if (i > 0)
            cout << " ";
            
        cout << ans[i];
    }

    cout << endl;

    return 0;
}
