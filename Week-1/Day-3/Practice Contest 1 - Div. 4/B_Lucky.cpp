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
        string s;
        cin >> s;
        int n=0,m=0;
        for(int i=0;i<3;i++)
            n=n+(s[i]-'0');
        for(int i=3;i<6;i++)
            m=m+(s[i]-'0');
        if(n==m)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}