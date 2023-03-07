#include<bits/stdc++.h>
using namespace std;
int main(){
    string h;
    cin>>h;

    for(int i=0;i<h.size();i++){
        if(h[i]=='W' && h[i+1]=='U' && h[i+2]=='B'){
            i=i+2;
            cout<<" ";
        }
        else{
            cout<<h[i];
        }
    }
}