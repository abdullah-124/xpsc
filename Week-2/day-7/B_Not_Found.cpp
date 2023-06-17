#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
#define stn string
using namespace std;

int main(){
    fastread()
    int fr[26]={0};
    stn s;   cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)fr[s[i]-'a']++;
    for(int i=0;i<26;i++){
        if(fr[i]==0){
            char c = 'a'+i;
            cout<<c<<endl;
            return 0;
        }
    }
    cout<<"None\n";
    return 0;
}