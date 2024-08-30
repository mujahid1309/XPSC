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
        int n;
        cin >> n;
        int ar[n + 3];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int i;
        int cnt = 1;
        int z = ar[n - 1];
        for (i = n - 2; i >= 0; i--)
        {
            if (ar[i] == ar[i + 1])
                cnt++;
            else
                break;
        }
        int ans = 0;
        while (i >= 0)
        {
            ans++;
            i -= cnt;
            cnt *= 2;
            while (i >= 0 && ar[i] == z)
                i--, cnt++;
        }
        cout << ans << '\n';
    }
    return 0;
}