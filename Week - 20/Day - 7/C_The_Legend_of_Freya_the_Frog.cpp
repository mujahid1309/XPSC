#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int t1, t2;
        if (x % k == 0)
            t1 = x / k;
        else
            t1 = (x / k) + 1;
        if (y % k == 0)
            t2 = y / k;
        else
            t2 = (y / k) + 1;
        int a = min(t1, t2);
        int b = max(t1, t2);
        int ans = a + b + (b - a);
        if (t1 > t2)
            ans--;
        cout << ans << '\n';
    }
    return 0;
}
