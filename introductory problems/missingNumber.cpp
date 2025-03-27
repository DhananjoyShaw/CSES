#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, ans = 0;
    long long givenSum = 0;
    cin >> n;

    long long arr[n - 1];
    for (size_t i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        givenSum += arr[i];
    }

    long long originalSum = (n * (n + 1)) / 2;

    ans = originalSum - givenSum;

    cout << ans << endl;

    return 0;
}
