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
        string s;
        cin >> s;
        int x=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                x++;
            else
            {
                if(x>0)
                    x--;
                else
                    ans++;
            }
                
        }
        cout << ans << '\n';
    }
    return 0;
}