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
        int temp = v[n - 1];
        int b[n] = {0};
        for (int i = n - 1; i >= 0; i--)
        {
            if (temp != 0 || v[i] != 0)
            {
                b[i] = 1;
                temp = max(temp, v[i]);
                temp--;
            }
            else
            {
                temp = v[i];
            }
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << '\n';
    }
    return 0;
}