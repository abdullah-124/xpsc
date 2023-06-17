#include <iostream>
using namespace std;
int fr[26];
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < (int)s.size(); i++)
    {
        fr[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fr[i] == 0)
        {
            cout<<(char)('a'+i);
            return 0;
        }
    }
    cout<<"None\n";
    return 0;
}