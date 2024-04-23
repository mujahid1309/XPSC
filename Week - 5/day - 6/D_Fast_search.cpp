#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin >> v[i];
    sort(v.begin(), v.end()); 
    ll q;
    cin >> q;
    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        auto x = lower_bound(v.begin(), v.end(), l);
        auto y = upper_bound(v.begin(), v.end(), r);
        cout << y - x << " ";
    }
    return 0;
}