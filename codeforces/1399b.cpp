#define fucking_fast                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
#define dead return 0;

void rahi(){
    ll n,p,q,a1,b1,s;
    cin>>n;

    int a[n],b[n];
    p=10e9;
    q=10e9;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<p){
            p = a[i];
        }
    }
    for(int i=0;i<n;i++){
        cin>>b[i];

        if(b[i]<q){
            q = b[i];
        }
    }

    s= 0;
    for(int i=0;i<n;i++){
        if(a[i]>p && b[i]>q){
            a1 = a[i]-p;
            b1 = b[i]-q;
            if(a1<=b1){
                s=s+a1+(b1-a1);
            }
            else{
                s=s+b1+(a1-b1);
            }
        }
        else if(a[i]>p){
            s=s+a[i]-p;
        }
        else if(b[i]>q){
            s=s+b[i]-q;
        }
    }
    cout<<s<<endl;


    
  
}
int main(){
    fucking_fast;
    ll t;
    cin>>t;
    while(t--){
        rahi();
    }
    dead;

}