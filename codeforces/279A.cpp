
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

int32_t main(){
    FIO;
    int n;
    cin>>n;
    int a[n+1];

    vector<int> ab,b,c;

    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==1){
            ab.pb(i);
        }
        else if(a[i]==2){
            b.pb(i);
        }
        else{
            c.pb(i);
        }
    }
    int w = min(ab.size(),min(b.size(),c.size()));
    cout<<w<<endl;

    for(int i=0;i<w;i++){
        cout<<ab[i]<<" "<<b[i]<< " "<<c[i]<<endl;
    }


return 0;

}