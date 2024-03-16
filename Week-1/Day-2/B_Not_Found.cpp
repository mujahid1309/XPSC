#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    bool freq[26];
    memset(freq, false, sizeof(freq));
    int i=0;
    while(s[i]!=NULL)
    {
        freq[s[i]-'a']=true;
        i++;
    }
    bool flag = false;
    for(int i=0;i<26;i++)
    {
        if(!freq[i])
        {
            char ch = i+'a';
            cout << ch << '\n';
            flag = true;
            break;
        }
    }
    if(!flag)
        cout << "None" << '\n';
    return 0;
}