#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    pair<int, int>a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(int j=0;j<n-1;j++){
        if(a[j].first<a[j+1].first && a[j].second>a[j+1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}