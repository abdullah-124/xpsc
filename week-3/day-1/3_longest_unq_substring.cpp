#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
int longestKSubstr(string s, int k) {
        int fr[26] = {0};
        int i=0,j=0,ans = -1, unq=0;
        int n = s.size();
        while(n>j){
            char c = s[j];
            if(fr[c - 'a']==0)unq++;
            fr[c-'a']++;
            if(unq>k){
                while(unq>k){
                    char left_i = s[i];
                    fr[left_i - 'a']--;
                    if(fr[left_i - 'a']==0)unq--;
                    i++;
                }
            }
            if(unq==k)ans = max(ans,j-i+1);
            j++;
        }
        return ans;
}
int main(){
    fastread()
    string s;cin>>s;
    int k;  cin>>k;
    int ans = longestKSubstr(s,k);
    cout<<ans<<endl;
    return 0;
}