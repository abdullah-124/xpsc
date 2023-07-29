#include <iostream>
using namespace std;

void printres(int x) {
    cout <<x<< endl;
}
void solveBinary (int low,int high,int a,int b,int c,int x) {
    int mid;
    while (low<=high){
        mid = (low + high)/2;
        if ((a^mid) < (b^mid) and (b ^ mid) < (c ^ mid)) {
            x = mid;
            break;
        }
        else if ((a ^ mid)<(b ^ mid)) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    printres(x);
}
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    long long x,low,high,mid;
    x=low=-1; low++;
    high= (1ll<<30)-1;
    solveBinary (low,high,a,b,c,x);
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}