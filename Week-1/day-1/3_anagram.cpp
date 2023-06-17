#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt, pat;
    cin >> txt >> pat;
    int i = 0, j = 0, ans = 0, k = pat.size();
    int fr1[26] = {0}, fr2[26] = {0};
    for (int i = 0; i < k; i++)
        fr1[pat[i] - 'a']++;

    while (j < (int)txt.size())
    {
        fr2[txt[j] - 'a']++;
        if (j < k - 1)
            j++;
        else
        {
            bool flag = true;
            for(int v = 0; v<26;v++){
                if(fr1[v] != fr2[v]){
                    flag = false;
                    break;
                }
            }
            if(flag)ans++;
            fr2[txt[i] - 'a']--;
            i++, j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}