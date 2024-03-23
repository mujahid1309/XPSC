#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++)
        cin >> a[i];

    ll l = 0, r = 0, ans = 0;
    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(a[r]);
        ll mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();
        if ((mx - mn) <= k)
            ans += (r - l + 1);
        else
        {
            while (l < r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if ((mx - mn) <= k)
                    break;
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if ((mx - mn) <= k)
                ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}