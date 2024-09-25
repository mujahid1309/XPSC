#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, d, k;
        cin >> n >> d >> k;
        int l, r;

        map<int, int> jST, jEnd;
        while (k--)
        {
            cin >> l >> r;
            jST[l]++;
            jEnd[r]++;
        }

        int minOL = 0, currOL = 0, maxOL = 0;
        int msd = 1, bsd = 1;

        for (int i = 1; i <= d; i++)
            if (jST.find(i) != jST.end())
                currOL += jST[i];

        minOL = maxOL = currOL;

        for (int i = 2; i <= n - d + 1; i++)
        {
            if (jST.find(i + d - 1) != jST.end())
                currOL += jST[i + d - 1];
            if (jEnd.find(i - 1) != jEnd.end())
                currOL -= jEnd[i - 1];
            if (currOL > maxOL)
            {
                maxOL = currOL;
                bsd = i;
            }
            if (currOL < minOL)
            {
                minOL = currOL;
                msd = i;
            }
        }
        cout << bsd << " " << msd << '\n';
    }
    return 0;
}