#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;
    long long int a[n], b[m], c[n+m];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<m;i++)
        cin >> b[i];
    int i=0, j=0;
    for(int k=0;k<n+m;k++)
    {
        if(i==n)
        {
            c[k]=b[j];
            j++;
        }
        else if(j==m)
        {
            c[k]=a[i];
            i++;
        }
        else if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else if(b[j]<=a[i])
        {
            c[k]=b[j];
            j++;
        }  
    }
    for(int k=0;k<n+m;k++)
        cout << c[k] << " ";
    cout << '\n';
    return 0;
}