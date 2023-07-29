#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using pbds = tree<T,null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve(){
    int n;    cin>>n;
    int t;  
    pbds<int>st;
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>t;
        st.insert(t);
        int x = st.order_of_key(t);
        ans += i-x;
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}