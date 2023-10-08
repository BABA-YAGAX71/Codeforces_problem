
 

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

int rahi(int a[], int n){
    if(is_sorted(a,a+n)){
        return 0;
    }
    int vm=-1;
    for(int i=n-1;i>=1;i--){
        if(a[i]>=a[i-1]){
            continue;
        }
        else{
            vm=i;
            break;
        }
    }
    int ans;
    ans = *max_element(a, a+vm);
    return ans;

}

int main(){

    FIO;
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<rahi(a, n)<<endl;
    }
    return 0;
}