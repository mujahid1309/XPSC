#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x, y;
    cin >> x >> y;
    if(x==y)
        cout << "=" << '\n';
    else
    {
        ll t1,t2;
        t1=y*log(x);
        t2=x*log(y);
        if(t1==t2)
            cout << "=" << '\n';
        else if(t1>t2)
            cout << ">" << '\n';
        else
            cout << "<" << '\n';
    }
    return 0;
}