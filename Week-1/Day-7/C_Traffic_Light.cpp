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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        int m=0;
        int cnt = 0;
        int x = 0;
		for (int i = 0; i < 2*n; i++) 
        {
			if(s[i] == c) 
                x = 1;
			if(s[i] == 'g')
            {
                x = 0;
                m = max(m, cnt);
                cnt = 0;
            }
			if(x==1)
                cnt++;
		}
        cout << m << '\n';
    }
    return 0;
}