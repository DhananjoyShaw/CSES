#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    vector<int> alpha(26, 0);

    for (int i = 0; i < s.length(); i++)
    {
        alpha[s[i] - 'A']++;
    }

    int oddChar = -1;

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] % 2 == 1)
        {
            if (oddChar != -1)
            {
                cout << "NO SOLUTION";
                return;
            }
            else
            {
                oddChar = i;
                alpha[i]--;
            }
        }
    }

    string firstHalf = "";

    for (int i = 0; i < 26; i++)
    {
        firstHalf += string(alpha[i] / 2, i + 'A');
    }

    string secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());

    if (oddChar != -1)
        firstHalf += string(1, oddChar + 'A');

    cout << firstHalf + secondHalf << endl;
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