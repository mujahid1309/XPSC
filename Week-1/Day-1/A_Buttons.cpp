#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin >> a >> b;
    if(a>b)
        cout << a+(a-1) << '\n';
    else if(b>a)
        cout << b+(b-1) << '\n';
    else
        cout << a+b << '\n';
    return 0;
}