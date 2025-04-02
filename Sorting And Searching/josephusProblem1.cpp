#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> childrens(n);
    for (int i = 0; i < n; i++)
    {
        childrens[i] = i + 1;
    }

    while (childrens.size() > 1)
    {
        vector<int> survivors;

        for (int i = 0; i < childrens.size(); i++)
        {
            if (i % 2 == 1)
            {
                cout << childrens[i] << " ";
            }
            else
            {
                survivors.push_back(childrens[i]);
            }
        }

        if (childrens.size() % 2 == 0)
        {
            childrens = survivors;
        }
        else if (childrens.size() % 2 == 1)
        {
            int last = survivors.back();
            survivors.pop_back();
            childrens.clear();
            childrens.push_back(last);
            for (int i = 0; i < survivors.size(); i++)
            {
                childrens.push_back(survivors[i]);
            }
        }
    }

    if (childrens.size() == 1)
    {
        cout << childrens[0] << " ";
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
