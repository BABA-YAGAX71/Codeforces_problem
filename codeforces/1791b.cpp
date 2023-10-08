#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void rahi(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int f=0;
    pair<int,int >p{0,0};

    for(auto &o : s){
        if(o == 'U'){
            p.second++;
        }
        if(o == 'D'){
            p.second--;
        }
        if(o == 'R'){
            p.first++;
        }
        if(o == 'L'){
            p.first--;
        }
        if(p.first == 1 && p.second == 1){
            cout<<"Yes"<<endl;
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"No"<<endl;
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