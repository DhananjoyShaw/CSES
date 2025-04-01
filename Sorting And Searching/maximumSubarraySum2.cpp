/*

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    long long maxi = LLONG_MIN;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long> prefixix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefixix[i] = prefixix[i - 1] + arr[i - 1];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        for (int len = a; len <= b; len++)
        {
            if (i + len < n)
            {
                long long sum = prefixix[i + len] - prefixix[i];
                maxi = max(maxi, sum);
            }
        }
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

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<long long> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }

    deque<int> dq;
    long long maxi = LLONG_MIN;

    for (int i = a; i <= n; i++)
    {
        /*
        Maintain deque: Remove elements out of range [i-b, i-a]. This ensures that we only consider valid subarrays of length [a, b]. Remove elements that are out of the range of the current window
        */
        if (!dq.empty() && dq.front() < i - b)
            dq.pop_front();

        /*
        Insert `i-a` into deque. Remove elements from the back of the deque while the current prefix sum is less than or equal to the prefix sum at the back of the deque. This ensures that we always have the smallest prefix sum at the front of the deque. This is because we want to maximize the difference prefix[i] - prefix[dq.front()]
        */
        while (!dq.empty() && prefix[dq.back()] >= prefix[i - a])
            dq.pop_back();

        dq.push_back(i - a);

        // Compute maximum sum using the smallest prefixix sum in deque
        maxi = max(maxi, prefix[i] - prefix[dq.front()]);
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