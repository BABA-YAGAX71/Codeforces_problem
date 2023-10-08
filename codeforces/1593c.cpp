#include<bits/stdc++.h>
using namespace std;

void rahi(){
    int long long a,b;
    cin>>a>>b;
    int long long m=0,i=0,ar[b];
    for(int j=0;j<b;j++){
        cin>>ar[j];
    }
    sort(ar,ar+b,greater<long long>());

    while(m<a){
        m=m+(a-ar[i++]);
        if(i==b+1){
            break;
        }
    }
    i=i-1;
    cout<<i<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int long long t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}