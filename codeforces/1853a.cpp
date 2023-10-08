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


int main(){

    fucking_fast;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vi a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int tor_dadu = INT_MAX;

        for(int i =1;i<n;i++){
            tor_dadu =  min(tor_dadu, a[i]-a[i-1]);
        }

        if(tor_dadu<0){
            cout<<"0"<<endl;
        }
        else{
            cout<<(tor_dadu/2)+1<<endl;
        }
    }

    dead;
}