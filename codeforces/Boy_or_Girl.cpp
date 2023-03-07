#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    string k;
    cin>>k;
    sort(k.begin(),k.end());
    for(int i=0;i<k.size();i++){
        if(k[i]!=k[i+1]){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}