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
        for(int i=0;i<n;i++)
        {
            int m;
            cin >> m;
            for(int j=0;j<m;j++)
            {
                char c;
                cin >> c;
                if(c=='D')
                    arr[i]=(arr[i]+1)%10;
                else
                {
                    if (arr[i] == 0)
                        arr[i] = 9;
                    else
                        arr[i] = arr[i] - 1;
                }
            }
    }
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << '\n';

    }
    return 0;
}