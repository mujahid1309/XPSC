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
        ll n, m, q;
        cin >> n >> m >> q;
        vector<ll> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        while (q--)
        {
            ll d;
            cin >> d;
            ll ans;
            if (d > v[m - 1])
                ans = n - v[m - 1];
            else if (d < v[0])
                ans = v[0] - 1;
            else
            {
                ll t1, t2;
                ll i = 0;
                while (v[i] < d)
                {
                    t1 = v[i];
                    i++;
                }
                t2 = v[i];
                ll ans1 = abs(t1 - d);
                ll ans2 = abs(t2 - d);
                ans = (ans1 + ans2) / 2;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}