#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    int a=0,b=0,c=0;
    for(int i=0;i<x.size();i++){
        if(x[i]=='1'){
            a++;
            b=0;
        }
        else{
            b++;
            a=0;
        }
        if(a == 7 || b == 7){
            c=1;
        }
    }
    if(c==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }   
    
 return 0;   
}