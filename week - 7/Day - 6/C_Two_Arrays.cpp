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
        ll n;
        cin >> n;
        vector<ll> v1(n);
        vector<ll> v2(n);
        for(ll i=0;i<n;i++)
            cin >> v1[i];
        for(ll i=0;i<n;i++)
            cin >> v2[i];
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        bool flag=true;
        for(ll i=0;i<n;i++)
        {
            ll d=v2[i]-v1[i];
            if(d>1 || d<0)
            {
                flag=false;
                cout << "NO" << '\n';
                break;
            }
        }
        if(flag)
            cout << "YES" << '\n';
    }
    return 0;
}