#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool happy(const vector<ll> &a, ll sum, ll n, ll x)
{
    double avg = (double)(sum + x) / n;
    double h_avg = avg / 2.0;

    ll cnt = 0;
    for (ll wealth : a)
        if (wealth < h_avg)
            cnt++;
    if (cnt > n / 2)
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1 || n == 2)
        {
            cout << -1 << '\n';
            continue;
        }
        ll sum = accumulate(a.begin(), a.end(), 0LL);
        ll l = 0, r = 1e12, ans = -1;
        while (l <= r)
        {
            ll m = (l + r) / 2;

            if (happy(a, sum, n, m))
            {
                ans = m;
                r = m - 1;
            }
            else
                l = m + 1;
        }
        if (ans == -1)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}