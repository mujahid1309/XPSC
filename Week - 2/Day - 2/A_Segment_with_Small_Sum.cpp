#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++)
        cin >> a[i];

    ll sum = 0;
    ll l = 0, r = 0, ans = 0;

    while (r < n) {
        sum += a[r];
        if (sum <= s)
            ans = max(ans, r - l + 1);
        else 
        {
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}