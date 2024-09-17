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
        ll t1, t2;
        cin >> t1 >> t2;
        ll d;
        cin >> d;
        ll ans;
        if (d > max(t1, t2))
            ans = n - max(t1, t2);
        else if (d < min(t1, t2))
            ans = min(t1, t2) - 1;
        else
        {
            ll ans1 = abs(t1 - d);
            ll ans2 = abs(t2 - d);
            ans = (ans1 + ans2) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}