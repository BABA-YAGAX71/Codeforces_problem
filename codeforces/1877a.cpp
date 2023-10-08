#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int ans = 0;
        for(int i=0;i<n-1;i++){
            cin>>ar[i];
            ans+=ar[i];
        }
        if(ans<0){
            cout<<(-1)*ans<<endl;
        }
        else{
            cout<<(-1)*ans<<endl;
        }
    }
    return 0;
}