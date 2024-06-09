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
        ll ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == ans)
                ans++;
            ans++;
        }
        ans--;
        cout << ans << '\n';
    }
    return 0;
}