#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin >> n >> q;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin >> a[i];
        vector<ll> pre_s(n),pre_m(n);
        pre_s[0]=a[0];
        pre_m[0]=a[0];
        for(ll i=1;i<n;i++)
        {
            pre_s[i]=pre_s[i-1]+a[i];
            pre_m[i]=max(pre_m[i-1],a[i]);
        }
        ll b[q];
        for(ll i=0;i<q;i++)
            cin >> b[i];
        for(ll i=0;i<q;i++)
        {
            ll x=upper_bound(pre_m.begin(),pre_m.end(),b[i])-pre_m.begin();
            if(x==0)
                cout << 0 << " ";
            else
                cout << pre_s[x-1] << " ";
        }
        cout << '\n';
    }
    return 0;
}