
 

#define FIO                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,b)			for(int i=a;i<=b;i++)
#define rfo(i,a,b)			for(int i=a;i>=b;i--)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define ss second
#define ff first 
#define ub upper_bound
#define lb lower_bound
typedef vector<int> vi;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rahi(){
    string s;
    cin>>s;
    int f=-1;
    int m = s.size();
    for(int i=0;i<=m;i++){
        if(s[i]>='5'){
            f=i;
            break;
        }
    }
    for(int i=f;i>=0;i--){
        if(s[i]<'4'){
            break;
        }
        else{
            f=i;
        }
    }
    if(f==0){
        cout<<1;
        for(int i=0;i<m;i++){
            cout<<0;
        }

    }
    else if(f==-1){
        for(int i=0;i<m;i++){
            cout<<s[i];
        }
    }
    else{
        s[f-1]++;
        for(int i=0;i<f;i++){
            cout<<s[i];
        }
        for(int i=f;i<m;i++){
            cout<<0;
        }
    }
    cout<<endl;
}
int main(){

    FIO;
    ll t=1;
    cin>>t;
    while(t--){
        rahi();
        
    }
    return 0;
}