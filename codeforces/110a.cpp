#include<bits/stdc++.h>
using namespace std;

int main(){
    string h;
    cin>>h;
    int count=0;
    for(int i=0;i<h.size();i++){
        if(h[i]=='4' || h[i]=='7'){
            
            count++;
        }
    }
    if(count==4 || count==7){
        cout<<"YES"<<endl;
    } 
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;

}