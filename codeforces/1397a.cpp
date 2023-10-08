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

void rahi(){
    int n;
    cin>>n;

    int x =n;
    int a[26]={0},f=0;
    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(a[i]%x!=0){
            f=1;
            break;
        }
    }
    if(f){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
  
}
int main(){
    fucking_fast;
    int t;
    cin>>t;
    while(t--){
        rahi();
    }
    dead;

}