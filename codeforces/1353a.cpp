
 

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

void rashid(){
    int n,m;
    cin>>n>>m;

    if(n==1){
        cout<<0<<endl;
    }
    else if(n>=3){
        cout<<2*m<<endl;
    }
    else{
        cout<<m<<endl;
    }
}

int main(){
    FIO;
    int t;
    cin>>t;
    while(t--){
        rashid();
    }
    return 0;
}