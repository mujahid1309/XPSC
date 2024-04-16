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
        ll n;
        cin >> n;
        ll arr[n];
        for(ll i = 0; i < n; i++)
            cin >> arr[i];
        int x=0;
        for(int i=0;i<n;i++)
            x^=arr[i];
        if(n%2!=0)
            cout << x << '\n';
        else
        {
            if(x==0)
                cout << 0 << '\n';
            else
                cout << -1 << '\n';
        }
            

    }
    return 0;
}