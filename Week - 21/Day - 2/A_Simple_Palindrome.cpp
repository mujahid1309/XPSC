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
        string v = "uoiea";
        string ans = "";
        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < n / 5 + (i < n % 5); ++j)
                ans += v[i];
        cout << ans << '\n';
    }
    return 0;
}