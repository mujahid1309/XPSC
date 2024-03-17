#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll a,b;
    cin >> a >> b;
    ll i=a;
    ll x=1;
    while(i<=b)
    {
        x++;
        i=i*2;
    }
    x--;
    cout << x <<'\n';
    return 0;
}