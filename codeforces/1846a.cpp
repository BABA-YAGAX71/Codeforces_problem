#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        while(n--){
            int a,b;
            cin>>a>>b;

            if(a>b){
                count++;
            }
        }
        cout<<count<<endl;
    }
}