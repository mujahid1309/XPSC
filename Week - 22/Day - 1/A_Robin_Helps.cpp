#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int r = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= k)
                r += v[i];
            else
            {
                if (r > 0 && v[i] == 0)
                {
                    r--;
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}