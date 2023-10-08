#include<bits/stdc++.h>
using namespace std;


int main(){
   
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int ans = (a+(2*b))+1;

       if(a==0){
        cout<<1<<endl;
       }
       else{
        cout<<ans<<endl;
       }
    }
    return 0;
}