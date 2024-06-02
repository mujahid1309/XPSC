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
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        int m=0;
        for(int i=1;i<=(2*n);i++)
        {
            int temp=0;
            for(auto x : mp)
            {
                int y=i-x.first;
                if(y>=1 && mp.count(y))
                    temp+=min(x.second,mp[y]);
            }
            temp/=2;
            m=max(m,temp);
        }
        cout << m << '\n';
    }
    return 0;
}
