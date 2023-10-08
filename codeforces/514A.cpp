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

char f(char ch){
    int a = ch - '0';
    a = 9 - a;

    return a+'0';
}
void rahi(){
    
    string h;
    cin>>h;

    for(int i=0;i<h.length();i++){
        if(i == 0 and h[i]=='9'){
            continue;
        }
        else{
            h[i]=min(h[i], f(h[i]));
        }
    }
    cout<<h<<endl;
    
}
 
int main(){
    fucking_fast;
    rahi();
    dead;
} 