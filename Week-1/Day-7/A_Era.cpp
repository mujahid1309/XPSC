#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        ll arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int x=0;
        int r=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i] - i > x)
                x = arr[i]-i;
        }
        x--;
        cout << x << '\n';
    }
    return 0;
}