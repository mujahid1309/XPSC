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
        ll temp = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            temp += v[i];
            if (temp < i)
            {
                flag = false;
                break;
            }
            temp -= i;
        }
        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}