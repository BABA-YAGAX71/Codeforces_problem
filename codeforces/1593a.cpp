#include<bits/stdc++.h>
using namespace std;
void rahi(){
    int long long a,b,c;
    cin>>a>>b>>c;
    
    cout<<max(a,max(b,c)+1)-a<<' '<<max(b,max(a,c)+1)-b<<' '<<max(c,max(a,b)+1)-c<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}