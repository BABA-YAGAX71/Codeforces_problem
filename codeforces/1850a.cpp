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
    int a,b,c;
    cin>>a>>b>>c;

    if((a+b)>=10){
        cout<<"Yes"<<endl;
    }
    else if((b+c)>=10){
        cout<<"Yes"<<endl;
    }
    else if((a+c)>=10){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}
int main(){
    FIO
    ll t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}