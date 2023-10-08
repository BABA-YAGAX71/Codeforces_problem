#include<bits/stdc++.h>
using namespace std;

void rahi(){
    int a,b,n;
    cin>>a>>b>>n;
    int turn,total=0;
    if(a>b){
        turn = 1;
    }
    else{
        turn = 0;
    }

    while(a<=n && b<=n){
        if(turn%2==0){
            a+=b;
            turn++;
            total++;
        }
        else{
            b+=a;
            turn++;
            total++;
        }
    }
    cout<<total<<endl;

}

int main(){
    int  t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;

}
