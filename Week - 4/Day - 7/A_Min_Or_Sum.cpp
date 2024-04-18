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
        int arr[n];
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            x|=arr[i];
        }
        cout << x << '\n';
    }
    return 0;
}