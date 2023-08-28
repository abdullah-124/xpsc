#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<vector<int>>v;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        //cout<<a[0][i]<<" ";
    }
    //cout<<endl;
    int cnt = 0;
	vector<int> x;
	while (x != a) {
		x = a;
		v.push_back(x);
		map<int, int> oc;
		for (auto i : a) oc[i]++;
		for(int i=0;i<n;i++){
            a[i] = oc[a[i]];
        }
        //cout<<endl;
        cnt++;
	}
    // for(int i=0;i<v.size();i++){
    //     for(int j=0;j<n;j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int q;
    cin>>q;
    while(q--){
        int c, b; cin>>c>>b; 
        
        b = min(b, cnt-1);
	    cout << v[b][c-1] << endl;
    }
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}