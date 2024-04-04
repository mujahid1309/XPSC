#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        priority_queue<int> pq;
        int sum=0;
        for (int i=0;i<n;i++)
        {
            if(arr[i]!=0)
                pq.push(arr[i]);
            else if(pq.size())
            {
                int x=pq.top();
                sum += x;
                pq.pop();
            }
        }
        cout << sum << '\n';
    }
    return 0;
}