#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string p = "EGYPT";
    int n = s.size(), k = p.size();
    string ans = "";
    for(int i=0;i<n;i++){
        string ss = "";
        for(int j=0;j<k;j++){
            if(i+j>n)break;
            ss += s[i+j];
        }
        //cout<<ss<<endl;
        if(ss == "EGYPT"){
            ans += " ";
            i += k-1;
        }
        else{
            ans += s[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}