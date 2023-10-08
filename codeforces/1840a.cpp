#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k,sum=0;
    cin>>n>>k;

    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        b[i]=abs(a[i]-a[i+1]);
    }
    n--;
    k--;
    sort(b,b+n);
    for(int i=0;i<n-k;i++){
        sum+=b[i];
    }
    cout<<sum<<endl;
    }
}