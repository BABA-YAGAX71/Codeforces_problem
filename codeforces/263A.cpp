#define fucking_fast                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(n)			for(int i=a;i<=b;i++)
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
    int a[6][6],A,B;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>a[i][j];

            if(a[i][j]==1){
                A=abs(3-i);
                B=abs(3-j);
                cout<<A+B<<endl;
            }
        }
    }
    
    dead;

}