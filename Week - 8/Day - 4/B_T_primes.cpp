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
 
    vector<bool> prime(1e7+1, true);
    for(ll i = 2;i * i <= 1e7+1;i++)
        if(prime[i])
            for (ll j = i + i;j <= 1e7+1;j += i)
                prime[j] = false;
 
    for(ll i=0;i<n;i++)
    {
        ll sq = sqrt(v[i]);
        if(v[i]==1)
            cout << "NO" << '\n';
        else if(sq*sq==v[i] && prime[sq])
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}