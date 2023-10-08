#include <bits/stdc++.h>
using namespace std;

#define fucking_fast                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,b)			for(int i=a;i<=b;i++)
#define rfo(i,a,b)			for(int i=a;i>=b;i--)

#define ll long long int
#define ld long double
#define pb push_back
#define ss second
#define ff first 
#define ub upper_bound
#define lb lower_bound
typedef vector<int> vi;
#define dead return 0;



int main() {
    fucking_fast;

    int k = 0;
  cin>>k;
  while(k--){
   int n,m;
    cin>>n>>m;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    
    int temp=0;
    int ans = 0;
    vector<string> p;
    for(int i=0;i<m;i++){
        string str="";
        for(int j=0;j<n;j++){
            str+=s[j][i];
        }
        p.push_back(str);
    }
    
    string match ="vika";
    int j=0,i=0;
    while(i<m){
        if (p[i].find(match[j]) != string::npos){
            j++;
        }
        if(j==4) break;
        i++;
    }
    if(j==4){
        cout<<"YES\n";
    }
    else 
    cout<<"NO\n";
  }
  dead;
}