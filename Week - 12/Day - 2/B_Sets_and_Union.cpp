#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v;
        set<int> st, st2;
        int k, b;
        int maxi = 0;
        map<int, int> mp, mp2;
        map<int, vector<int>> ind;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                cin >> b;
                temp.push_back(b);
                mp[b]++;
                st.insert(b);
                ind[b].push_back(i);
            }
            v.push_back(temp);
        }

        set<int>::iterator it;
        for (it = st.begin(); it != st.end(); it++)
        {
            st2 = st;
            mp2 = mp;
            int val = *it;
            for (int i = 0; i < (int)ind[val].size(); i++)
            {
                for (int j = 0; j < (int)v[ind[val][i]].size(); j++)
                {
                    mp2[v[ind[val][i]][j]]--;
                    if (mp2[v[ind[val][i]][j]] == 0)
                        st2.erase(v[ind[val][i]][j]);
                }
            }
            maxi = max(maxi, (int)st2.size());
        }
        cout << maxi << '\n';
    }
    return 0;
}