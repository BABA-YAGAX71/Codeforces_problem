#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        string h;
        char c;
        cin>>h>>c;
        ll f =0;
        for(int i=0;i<h.length();i++){
            if(h[i]==c){
                if(i%2==0){
                    f+=1;
                }
            }
        }
        if(f>0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}