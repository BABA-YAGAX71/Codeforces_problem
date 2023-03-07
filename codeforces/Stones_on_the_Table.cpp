#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    string k;
    cin>>k;
    for(int i=0;i<n;i++){
        if(k[i]==k[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}