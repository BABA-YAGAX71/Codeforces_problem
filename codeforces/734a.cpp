#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=0;
    cin>>n;
    string h;
    cin>>h;
    for(int i=0;i<n;i++){
        if(h[i]=='A'){
            a++;
        }
        else if(h[i]=='D'){
            b++;
        }
    }
    if(a>b){
        cout<<"Anton"<<endl;
    }
    else if(b>a){
        cout<<"Danik"<<endl;
    }
    else if(a==b){
        cout<<"Friendship"<<endl;
    }
    return 0;
}