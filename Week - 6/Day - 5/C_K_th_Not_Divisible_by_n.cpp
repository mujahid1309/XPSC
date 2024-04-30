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
        if(k<n)
            cout << k << '\n';
        else
        {
            ll ans;
            ans=k+(k/(n-1));
            if(ans%n==0)
                ans--;
            cout << ans << '\n';
        }
    }
    return 0;
}