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

    int t;
    cin>>t;
    while(t--){

        int a,b;
        cin >> a >> b;
        if(a == b){
            cout << "0" << endl;
        }
        else if( a < b){
            if((b-a)%2 == 1){
                cout << "1" << endl;
            }else{
                cout << "2" << endl;
            }
        }else{
            if((a-b)%2 == 0){
                cout << "1" << endl;
            }else{
                cout << "2" << endl;
        } 
    }    
      
  }
  dead; 
}