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
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        int s=0;
        for (auto it : m)
        {
            if(it.second>1)
                s+=it.second-1;
        }
        if(s%2==0)
            n-=s;
        else
            n=n-s-1;
        cout << n << '\n';
    }
    return 0;
}