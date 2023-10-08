#define fucking_fast                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(n)			for(int i=a;i<=b;i++)
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
typedef set<int> st;
#define dead return 0;

void rahi(){
    int a;
    cin>>a;
    int ar[a];
    int count =0,coun1=0;
    for(int i =0;i<a;i++){
        cin>>ar[i];
        if(ar[i]%2==0){
            count++;
        }
        else{
            coun1++;
        }
    }
    cout<<min(count, coun1)<<endl; 
}
int main(){
    fucking_fast;
    int t;
    cin>>t;
    while(t--){
        rahi();
    }
    dead;

}