#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, s;
    cin >> n >> s;
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++)
    {
        ll s2 = s-v[i].first;
        ll k=n-1;
        for(ll j=i+1;j<k;j++)
        {
            while (v[j].first+v[k].first > s2)
                k--;
            if (j<k && ((v[j].first+v[k].first) == s2))
            {
                cout << v[i].second << " " << v[j].second << " " << v[k].second;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}