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
        string str[3][n];
        map<string, int> mp;
        for(int i=0;i<3;i++)
            for(int j=0;j<n;j++)
            {
                cin >> str[i][j];
                mp[str[i][j]]++;
            }
        int res[3]={0};
        for(int i=0;i<3;i++)
            for(int j=0;j<n;j++)
            {
                if(mp[str[i][j]]==1)
                    res[i]+=3;
                else if(mp[str[i][j]]==2)
                    res[i]++;
            }
        for(int i=0;i<3;i++)
            cout << res[i] << " ";
        cout << '\n';
    }
    return 0;
}