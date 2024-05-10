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
        set<char> st;
        for(int i=0;i<n;i++)
            st.insert(s[i]);
        vector<int> v(26,INT_MAX);
        for(auto &c:st)
        {
            int l=0;
            int r=n-1;
            int count=0;
            while(l<r)
            {
                if(s[l]==s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if(s[l]==c)
                    {
                        l++;
                        count++;
                    }
                    else if(s[r]==c)
                    {
                        r--;
                        count++;
                    }
                    else
                    {
                        count=-1;
                        break;
                    }
                }
            }
            if(count!=-1)
                v[c-'a']=count;
        }
        sort(v.begin(), v.end());
        if(v[0]==INT_MAX)
            cout << "-1" << '\n';
        else
            cout << v[0] << '\n';
    }
    return 0;
}