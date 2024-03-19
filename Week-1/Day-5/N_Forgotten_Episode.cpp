#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    ll s=0;
    ll a[n];
    for(ll i=0;i<n-1;i++)
    {
        cin >> a[i];
        s=s+a[i];
    }
    ll s2=n*(n+1)/2;
    cout << s2-s << '\n';
    return 0;
}