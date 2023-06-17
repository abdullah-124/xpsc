#include <bits/stdc++.h>
using namespace std;
void reverseOf(string t)
{
    int n = t.size();
    for (int i = n - 1; i >= 0; i--)
        cout << t[i];
}
int main()
{
    string s;
    getline(cin,s);
    int n = s.size();
    string t = "";
    for (int i = 0; i < n; i++)
    {
       // cout<<s[i];
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            t += s[i];
            //cout<<t;
        }
        else
        {
            reverseOf(t);
            cout<<" ";
            t = "";
        }
    }
    reverseOf(t);
    return 0;
}