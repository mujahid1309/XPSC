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
        string str;
        cin >> str;
        int n=str.size();
        vector<int> s,u;
        vector<bool> flag(n,true);
        for(int i=0;i<n;i++)
        {
            if(str[i]=='b')
            {
                if(!s.empty())
                {
                    flag[s.back()]=false;
                    s.pop_back();
                }
                flag[i]=false;
            }
            else if(str[i]=='B')
            {
                if(!u.empty())
                {
                    flag[u.back()]=false;
                    u.pop_back();
                }
                flag[i]=false;
            }
            else if(str[i]>='A' and str[i]<='Z')
                u.push_back(i);
            else
                s.push_back(i);
        }
        for(int i=0;i<n;i++)
            if(flag[i])
                cout << str[i];
        cout << '\n';
    }
    return 0;
}