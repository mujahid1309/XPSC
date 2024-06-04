#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0, j=0;
    int temp=0, ans=0;
    while(i<n && j<n)
    {
        if(a[i]<b[j])
        {
            temp++;
            ans=max(ans, temp);
            i++;
        }
        else
        {
            j++;
            temp--;
        }
    }
    cout << ans << '\n';
    return 0;
}