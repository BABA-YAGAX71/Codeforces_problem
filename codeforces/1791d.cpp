#include<bits/stdc++.h>
using namespace std;
#define int long long 

void rahi(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    map<char,int> a,b;

    for(auto &o:s){
        a[o]++;
    }
    int ans  =0;
    for(auto &o :s){
        a[o]--;
        b[o]++;
        if(a[o] == 0){
            a.erase(o);
            
        }
        ans = max(ans,(a.size()+b.size())*1LL);
    }
    cout<<ans<<endl;   
}
int32_t main(){

    int t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}