#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n][n-1];
        for (int i=0;i<n;i++)
            for (int j=0;j<n-1;j++)
                cin >> a[i][j];

        map<ll,ll> m;
        for (int i=0;i<n;i++) 
            m[a[i][0]]++;

        ll max=-1e18, oc = 0;
        for (auto x : m) 
            if (x.second > oc) 
            {
                max = x.first;
                oc = x.second;
            }
        cout << max << " ";
        for (int i=0;i<n;i++)
            if (a[i][0]!=max)
                for (int j=0;j<n-1;j++) 
                    cout << a[i][j] << " ";

        cout << endl;
    }
    return 0;
}