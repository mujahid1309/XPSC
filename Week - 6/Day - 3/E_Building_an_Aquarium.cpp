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
        ll n,x;
        cin >> n >> x;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
            cin >> v[i];
        ll l=1,r=1e10,mid;
        while(l<r-1)
        {
            mid = l+(r-l)/2;
            ll ans=0;
            for(ll i=0;i<n;i++)
                if(v[i]<mid)
                    ans+=(mid-v[i]);
            if(ans>x) 
                r=mid;
            else
                l=mid;
        }
        cout << l << '\n';
    }
    return 0;
}