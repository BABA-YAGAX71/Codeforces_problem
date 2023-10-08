#define fucking_fast                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(n)              for(int i=0;i<n;i++)
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
    int tt;
    while(tt--){
        int n;
        cin>>n;
        string h1,h2;
        int count =0;
        for(int i =0;i<n;i++){
            cin>>h1[i]>>h2[i];
            
            if(h1[0]=='G' && h1[1]=='R' && h1[2]=='B'){
                count++;
            }
            else if(h1[i]=='B' && h2[i]=='R'){
                count++;
            }
            else{
                count = 0;
            }
        }
        if(count == 0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}