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
        vector<int> v(n), even, odd;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                even.push_back(i + 1);
            else
                odd.push_back(i + 1);
        }
        if (odd.size() >= 3)
        {
            cout << "YES" << endl;
            cout << odd[0] << " " << odd[1] << " " << odd[2] << endl;
        }
        else if (even.size() >= 2 and odd.size() >= 1)
        {
            cout << "YES" << endl;
            cout << even[0] << " " << even[1] << " " << odd[0] << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}