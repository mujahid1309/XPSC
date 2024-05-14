#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll l, r;
    cin >> l >> r;
    cout << "YES" << '\n';
    for(ll i=l;i<r+1;i+=2)
        cout << i << " " << i+1 << '\n';
    return 0;
}