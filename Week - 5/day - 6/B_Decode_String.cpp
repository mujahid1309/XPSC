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
        vector<char>ans;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                int num = (s[i-2]-'0')*10 + (s[i-1]-'0');
                char c = (char)(96+num);
                ans.push_back(c);
                i-=2;
            }
            else
            {
                char c = s[i]-'0'+'a'-1;
                ans.push_back(c);
            }
        }
        reverse(ans.begin(), ans.end());
        for (auto x : ans)
            cout << x;
        cout << '\n';
    }
    return 0;
}