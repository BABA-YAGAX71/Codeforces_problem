
 

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

int32_t main(){
    FIO;
    int t;
    cin>>t;
    string h;
    while(cin>>h){
        if(h=="()"){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
        string d(h.length(), '(');
        d+= string(h.length(), ')');
        string b = "";
        for(int i=0;i<h.length();i++)
        b+="()";      
        if(d.find(h)!= string::npos){
            cout<<b<<endl;
        }
        else{
            cout<<d<<endl;
        }
    }
    return 0;
}
