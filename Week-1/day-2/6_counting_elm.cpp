#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt = 0;
    cin>>n;
    multiset<int>ml;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        ml.insert(temp);
    }
    for(auto it : ml){
        auto res = ml.find(it+1);
        if(res != ml.end())cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}