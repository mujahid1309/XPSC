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
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int freq[n+1]={0};
        for(int i=0;i<n;i++)
            freq[arr[i]]++;
        bool flag = false;
        for(int i=0;i<=n;i++)
        {
            if(freq[i]>2)
            {
                cout << i << '\n';
                flag = true;
                break;
            }
        }
        if(!flag)
            cout << -1 << '\n';

    }
    return 0;
}