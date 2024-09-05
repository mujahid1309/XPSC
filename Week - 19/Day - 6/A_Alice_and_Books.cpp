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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll ans = v[n - 1];
        ll mx = -1;
        for (int i = 0; i < n - 1; i++)
            mx = max(mx, v[i]);
        ans += mx;
        cout << ans << '\n';
    }
    return 0;
}