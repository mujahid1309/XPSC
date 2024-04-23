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
        ll a,b,c;
        cin >> a >> b >> c;
        ll ans;
        ans = abs(c-b)+c;
        if(a==ans)
            cout << 3 << '\n';
        else if(a<ans)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
    return 0;
}