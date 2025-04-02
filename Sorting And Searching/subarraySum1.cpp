#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin >>n >>m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0, count = 0;
    long long sum = 0;

    for(int right = 0; right < a.size(); right++){
        sum += a[right];

        while(sum > m){
            sum -= a[left];
            left++;
        }

        if(sum == m){
            count++;
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