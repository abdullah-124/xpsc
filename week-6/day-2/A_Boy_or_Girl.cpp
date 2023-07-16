#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    string s;   cin>>s;
    int ar[26] = {0};
    int dst = 0;
    for(auto it : s){
        ar[it-'a']++;
        if(ar[it-'a']==1)dst++;
    }
    cout<<dst<<endl;
    // if(dst>=6 or s.size()<6)cout<<"CHAT WITH HER!\n";
    // else cout<<"IGNORE HIM!\n";
    return 0;
}