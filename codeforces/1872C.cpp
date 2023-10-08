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

ll getPrime(ll n)
{
    while (n % 2 == 0)
    {
        return 2;
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return i;
            n = n/i;
        }
    }
    if (n > 2)
        return n;
}
 
int main(){
    
    fucking_fast;
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        if(r <= 3) {
            cout<<-1<<endl;
        }
        else {
            if(l < r) {
                if(r%2 != 0) {
                    r--;
                }
                cout<<2<<" "<<r-2<<endl;
            }
            else { 
                ll prime = getPrime(l);
                if(prime == l)
                    cout<<-1<<endl;
                else
                    cout<<prime<<" "<<l-prime<<endl;
            }
        }
    }     
    return 0;
}