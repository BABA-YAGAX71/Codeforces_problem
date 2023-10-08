#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> n = {100,20,10,5,1};
    int count =0;
    int i=0;
    int t;
    cin>>t;

    while(t!=0){
        if(t%n[i]==0){
            count+=(t/n[i]);
            return cout<<count, 0;
        }
        if(n[i]<t){
            t-=n[i];
            count++;
        }
        else{
            i++;
        }
    }
    return 0;
    
}