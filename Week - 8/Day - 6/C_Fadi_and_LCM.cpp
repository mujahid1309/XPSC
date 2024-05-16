#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll a, ll b)
{
    return a/__gcd(a, b)*b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    ll x;
    for(ll i=1;i*i<=n;i++)
        if(n%i==0 && lcm(i, n/i)==n)
            x = i;

    cout << x << " " << n/x << '\n';
    return 0;
}