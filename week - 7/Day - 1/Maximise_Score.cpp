#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        vector<int> dif(n-1);
        for(int i=0;i<n-1;i++)
            dif[i]=abs(a[i]-a[i+1]);
        int ans=INT_MAX;
        if(n>=2)
            ans = min(ans,dif[0]);
        if(n>=2)
            ans = min(ans,dif[n-2]);
        for(int i=1;i<n-1;i++)
        {
            int temp = max(dif[i-1],dif[i]);
            ans = min(ans,temp);
        }
        cout << ans << '\n';
    }
    return 0;
}