#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
map<char,char>mp;

bool isPl(string s){
    string r = s;
    reverse(r.begin(),r.end());
    return s==r;
}
bool isMr(string s){
    
    int n = s.size();
    for(int i=0;i<n/2;i++){
        if(mp[s[i]] != s[n-i-1]){
            return false;
        }
    }
    if(n%2==1){
        if(mp[s[(n/2)]] == s[(n/2)])return true;
        else {
            return false;
        }
    }
    return true;
}
int main(){
    fastread()
    string A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string B = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    int N = A.size();
    for(int i=0;i<N;i++)mp[A[i]] = B[i];
    string s;
    while(cin>>s){
        if(s=="")break;
        bool pl = isPl(s);
        bool mr = isMr(s);
        cout<<s<<" -- ";
        if(pl && mr){
            cout<<"is a mirrored palindrome."<<endl;
        }
        else if(pl and !mr){
            cout<<"is a regular palindrome."<<endl;
        }
        else if(!pl and mr){
            cout<<"is a mirrored string."<<endl;
        }
        else{
            cout<<"is not a palindrome."<<endl;
        }
    }
    return 0;
}