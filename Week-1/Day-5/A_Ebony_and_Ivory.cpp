#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin >> a >> b >> c;
    int max,min;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    bool flag=false;
    while(c>=0)
    {
        if(c%min==0)
        {
            cout << "Yes" << '\n';
            flag=true;
            break;
        }
        c=c-max;
    }
    if(!flag)
        cout << "No" << '\n';
    return 0;
}