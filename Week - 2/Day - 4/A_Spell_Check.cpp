#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    string s1="Timur";
    sort(s1.begin(), s1.end());
    while(t--)
    {
        int n;
        cin >> n;
        string s2;
        cin >> s2;
        sort(s2.begin(), s2.end());
        if((s1.compare(s2)) == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}