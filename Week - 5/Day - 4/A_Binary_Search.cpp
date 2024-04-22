#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++)
        cin >> a[i];
    while(k--)
    {
        ll key;
        cin >> key;
        ll l = 0, r = n - 1, mid, idx = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key == a[mid])
            {
                idx = mid;
                break;
            }
            else if (key < a[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (idx == -1)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}