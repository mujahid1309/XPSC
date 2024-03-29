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
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(unique(s.begin(), s.end()), s.end());
        string s2="meow";
        if(s==s2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}