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
        int f= INT_MIN;
        
        map<int,int> m;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
            f=max(f, m[x]);
        }
        
        if(f==n) 
            cout << 0 << '\n';
        else
        {
            int cnt=1;
            while(f<=n)
            {
                if(f*2>=n)
                {
                    cnt+=(n-f);
                    break;
                }
                cnt+=f;
                f= f*2;
                cnt++;
            }
            
            cout<<cnt<<'\n';
        }
    }
    return 0;
}