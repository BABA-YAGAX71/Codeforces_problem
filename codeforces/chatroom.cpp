#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    string a="hello";
    int n=0,k=0;
    for(int i=0;i<x.size();i++){
        if(x[i]==a[n]){
            n++;
            k++;
        }
    }
    if(k==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}