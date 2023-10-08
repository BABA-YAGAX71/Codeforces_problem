
 

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


void rahi(){
    string s;
    cin>>s;

    int k=-1,p=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            if(k!=-1){
                p+=(i-k-1);
            }
            k=i;
        }
    }
    cout<<p<<endl;
}
int main(){

    FIO;
    ll t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}