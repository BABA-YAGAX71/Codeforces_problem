
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

int main(){
    int n;
    cin>>n;
    int f=0;
    for(;n>0;){
        if(n%2==1){
            f++;
        }
        n/=2;
    }
    cout<<f<<endl;
    return 0;
}