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
        vector<string> v(n);
        map<string,bool> m;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            m[v[i]]=true;
        }    
        for(int j=0;j<n;j++)
        {
            bool flag=false;
            for(int i=0;i<v[j].size();i++)
            {
                string s1=v[j].substr(0,i);
                string s2=v[j].substr(i,v[j].size()-1);
                if(m[s1]==true && m[s2]==true)
                {
                    flag=true;
                    break;
                }
            }
            if(flag)
                cout << 1;
            else
                cout << 0;
        }
        cout << '\n';
    }
    return 0;
}