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
typedef set<int> st;
#define dead return 0;

void rahi(){
    string h;
    cin>>h;
    
    if(h == "abc" || h== "acb" || h== "bac"|| h== "cba"){

        cout<<"Yes"<<endl;
    }
        
    else{
        cout<<"No"<<endl;
    }

  
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