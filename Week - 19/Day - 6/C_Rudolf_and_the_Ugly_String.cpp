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
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            string temp = s.substr(i, 3);
            if (temp == "pie" || temp == "map")
            {
                i += 2;
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}