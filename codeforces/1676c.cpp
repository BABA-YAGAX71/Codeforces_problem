#include<bits/stdc++.h>
using namespace std;
int difference(string x,string y){
    int ans =0;
    for(int i=0;i<x.size();i++){
        ans += abs(x[i]-y[i]);
    }
    return ans;
}

void rahi(){
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int k = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            k = min(k,difference(a[i],a[j]));
        }
    }
    cout<<k<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}