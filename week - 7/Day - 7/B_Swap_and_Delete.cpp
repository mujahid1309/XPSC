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
        ll ans=0;
        string s;
        cin >> s;
        ll n=s.size();
        ll a[2]={0,0};
        for( ll i=0;i<n;i++)
            a[s[i]-'0']++;
        for(ll i=0;i<n;i++)
        {
            if(a[!(s[i]-'0')]>0)
                a[!(s[i]-'0')]--;
            else
            {
                ans=n-i;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}