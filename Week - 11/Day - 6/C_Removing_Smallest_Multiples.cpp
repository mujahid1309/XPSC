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
        ll n;
        string s;
        cin >> n >> s;

        ll ans = 0;
        string marked(n, '1');

        for (ll i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                for (ll j = i + 1; j <= n; j += i + 1)
                {
                    if (s[j - 1] == '1')
                        break;
                    if (marked[j - 1] == '0')
                        continue;
                    marked[j - 1] = '0';
                    ans += i + 1;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}