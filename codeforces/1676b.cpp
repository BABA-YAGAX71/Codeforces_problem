#include<bits/stdc++.h>
using namespace std;
#define long long int ll;

void rahi(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int k=0;
    for(int i=0;i<n;i++){
        k+=a[i]-a[0];
    }
    cout<<k<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}