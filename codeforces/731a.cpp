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
    string h;
    cin>>h;

    char ch = 'a';
    int ans = 0;

    for(int i=0;i<h.size();i++){

        int mini = min(abs(h[i]-ch), 26 - abs(h[i]-ch));

        ans += mini;

        ch  = h[i];
    }

    cout<<ans<<endl;

    dead;


}