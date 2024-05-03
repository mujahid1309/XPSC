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
        int x=0, y=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                x++;
            else
                y++;
        }
        int ans=min(x,y);
        if(ans%2==0)
            cout << "Ramos" << '\n';
        else
            cout << "Zlatan" << '\n';
    }
    return 0;
}