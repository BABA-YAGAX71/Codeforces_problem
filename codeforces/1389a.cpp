#include<bits/stdc++.h>
using namespace std;

void rahi(){
    int l,k;
    cin>>l>>k;

    if(2*l > k){
        cout<<"-1 -1"<<endl;
    }
    else{
        cout<<l<<" "<<2*l<<endl;
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        rahi();
    }
    return 0;
}
