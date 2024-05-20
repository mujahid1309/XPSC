#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin >> arr[i];
    ll ans=0;
    set<ll> st;
    ll i=0,j=0;
    while(i<n && j<n)
    {
        while(j<n && !st.count(arr[j]))
        {
            st.insert(arr[j]);
            ans=max(ans,j-i+1);
            j++;
        }
        while(j<n && st.count(arr[j]))
        {
            st.erase(arr[i]);
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}