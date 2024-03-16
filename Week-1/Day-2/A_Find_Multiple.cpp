#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin >> a >> b >> c;
    bool flag = false;
    while(c<=b)
    {
        if(c>=a)
        {
            cout << c << '\n';
            flag = true;
            break;
        }
        c+=c;
    }
    if(!flag)
        cout << -1 << '\n';
    return 0;
}