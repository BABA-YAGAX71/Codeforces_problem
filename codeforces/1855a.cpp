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
    int t;
    cin>>t;

    int a[t];

    int count = 0;
    for(int i=0;i<t;i++){
        cin>>a[i];

        if(a[i]==i+1){
            ++count;
        }
    }
    int x = (count+1)/2;
    cout<<x<<endl;
}

int main(){
    fucking_fast;
    int n;
    cin>>n;
    while(n--){
        rahi();
    }
    dead;
}