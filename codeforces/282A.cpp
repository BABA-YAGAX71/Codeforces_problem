
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

int main(){
    fucking_fast;
    int n,x= 0;
    cin>>n;
    string h;
    for(int i=0;i<n;i++){
        cin>>h;

        if(h[1]=='+'){
            x++;
        }
        else{
            --x;
        }
    }
    cout<<x<<endl;
    dead;
}