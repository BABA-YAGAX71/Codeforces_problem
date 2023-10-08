#include<bits/stdc++.h>
using namespace std;

void rahi(){
    int long long a,b;
    cin>>a>>b;

    if(b*b>a){
        cout<<"No"<<endl;
    }
    else if(b%2 != a%2){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }


}

int main(){
    int long long t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}
