
 

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
    ll n;
    cin>>n;
    vector<int> a(n);
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==0){
        cout<<"yes"<<endl;
    }
    else{
        bool p = false;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0 && (sum - a[i])%2!=0){
                p = true;
                break;
            }
        }
        if(p){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
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