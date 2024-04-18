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
        ll ans=1;
        while(true)
        {
            if(ans*2>n)
            {
                cout << ans-1 << '\n';
                break;
            }
            ans*=2;
        }
    }  
    return 0;
}