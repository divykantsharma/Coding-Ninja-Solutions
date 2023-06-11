#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll subsetSum(ll arr[], ll n, ll i, ll sum, ll count)
{
    if (i == n)
    {
        if (sum == 0)
            count++;
        return count;
    }
    count = subsetSum(arr, n, i + 1, sum - arr[i], count);
    count = subsetSum(arr, n, i + 1, sum, count);
    return count;
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        if (n == 0)
            cout << ""
                 << "\n";
        else
            cout << subsetSum(arr, n, 0, k, 0) << "\n";
    }
    return 0;
}
