#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        vector<ll> v(k);
        for(ll i=0;i<k;i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());
        ll cat=0, ans=0;
        for(ll i=0;i<k;i++)
        {
            if(cat<v[i])
            {
                cat+=(n-v[i]);
                ans++;
            }
            else 
                break;
        }
        cout << ans << '\n';
    }
    return 0;
}