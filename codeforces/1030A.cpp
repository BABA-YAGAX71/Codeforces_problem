#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            count++;
        }
    }
    if(count==0){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
    return 0;
}