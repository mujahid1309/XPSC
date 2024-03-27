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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> m;
        for(int i=0;i<n;i++)
            m[s[i]]++;
        int x = 0;
        for(auto it: m)
            if(it.second%2!=0)
                x++;
        if(k<n && k>=x-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}