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
        int n,q;
        cin >> n >> q;
        ll arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        ll s[n];
        s[0]=arr[0];
        for(int i=1;i<n;i++)
            s[i]=s[i-1]+arr[i];
        while(q--)
        {
            int l,r;
            ll k,sum;
            cin >> l >> r >> k;
            l--;
            r--;
            if(l==0)
                sum = s[n-1]-s[r]+(r-l+1)*k;    
            else
                sum = s[l-1]+s[n-1]-s[r]+(r-l+1)*k;
            if(sum%2==1)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n'; 
        }
    }
    return 0;
}