#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,x;
    cin >> n >> x;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin >> v[i];
    v.erase(remove(v.begin(), v.end(), x), v.end());
    for (auto it : v)
        cout << it << " ";
    return 0;
}