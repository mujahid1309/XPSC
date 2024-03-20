#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<ll>v(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.begin(), v.end());
    if(sum%2==0)
        cout << sum << '\n';
    else
    {
        int i=0;
        while(i<n)
        {
            if((sum-v[i])%2==0)
            {
                cout << sum-v[i] << '\n';
                break;
            }
            i++;
        }
    }
    return 0;
}