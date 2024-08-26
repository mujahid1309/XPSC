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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (v[0] == v[n - 1])
            cout << "NO" << '\n';
        else
        {
            cout << "YES" << '\n'
                 << v[0] << " ";
            for (int i = n - 1; i > 0; i--)
                cout << v[i] << " ";
            cout << '\n';
        }
    }
    return 0;
}