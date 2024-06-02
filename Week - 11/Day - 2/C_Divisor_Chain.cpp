#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        v.push_back(n);
        ll i=0;
        while((1<<i)<n)
        {
            if((1<<i)&n)
            {
                n=n^(1<<i);
                v.push_back(n);
            }
            i++;
        }
        while(n>1)
        {
            n/=2;
            v.push_back(n);
        }
        cout << v.size() << '\n';
        for(auto x:v)
            cout << x << " ";
        cout << '\n';
    }
    return 0;
}