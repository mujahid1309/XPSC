#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll x = max(1LL, n - k + 1);
        ll cnt1 = (n + 1) / 2;
        ll cnt2 = (x - 1 + 1) / 2;
        ll ans = cnt1 - cnt2;
        if (ans % 2 == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}