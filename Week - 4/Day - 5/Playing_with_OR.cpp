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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for(ll i = 0; i < n; i++)
            cin >> arr[i];
        ll l = 0, r = 0;
        long long odd = 0, ans = 0;
        while (r < n)
        {
            if(arr[r]%2!=0)
                odd++;
            if ((r - l + 1) == k)
            {
                if(odd>0)
                    ans++;
                if(arr[l]%2!=0)
                    odd--;
                l++;
                r++;
            }
            else
                r++;
        }
        cout << ans << '\n';
    }
    return 0;
}