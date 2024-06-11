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
        ll posSum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > -1)
                posSum += v[i];
        }
        ll ans = 0, add = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] > 0)
                {
                    add = max(add, posSum);
                    posSum -= v[i];
                }
                else
                    add = max(add, posSum + v[i]);
            }
            else
            {
                if (v[i] > 0)
                {
                    posSum -= v[i];
                    add = max(add, posSum);
                }
                else
                    add = max(add, posSum);
            }
        }
        ans += add;
        cout << ans << '\n';
    }
    return 0;
}