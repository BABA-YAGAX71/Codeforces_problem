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
int c[5];

int main()
{
    fucking_fast;
    int n,m,y=0;
    cin >> n;
    for ( int i=0 ; i<n ; i++ )
    {
        cin >> m ;
        c[m]++;
    }
    c[1]-=c[3];
    y=(c[4])+c[3]+(c[2]/2)+(c[2]%2);
    c[1]=c[1]-(2*(c[2]%2));
    if ( c[1]>0 ) y+=(c[1]/4)+(c[1]%4>0);
    cout << y << endl;
    dead;
}