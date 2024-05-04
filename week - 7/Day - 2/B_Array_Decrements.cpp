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
        ll a[n], b[n];
        for(ll i=0;i<n;i++)
            cin >> a[i];
        for(ll i=0;i<n;i++)
            cin >> b[i];
        bool flag=true;
        ll dif=-1, z_dif=-1;
        for(ll i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                flag = false;
                break;
            }
            if(b[i]!=0)
            {
                if(dif==-1)
                    dif=a[i]-b[i];
                else
                    if((a[i]-b[i])!=dif)
                    {
                        flag = false;
                        break;
                    }
            }
            else
                z_dif=max((a[i]-b[i]),z_dif);
        }
        if(!flag)
            cout << "NO" << '\n';
        else
        {
            if(dif==-1 || z_dif<=dif)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}