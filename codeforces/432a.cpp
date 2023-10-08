
 

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
    int n,k,temp=0,sum=0;
    cin>>n>>k;

    vector<char> v;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n-2;i+=3){
        if(v[i]+k<=5 && v[i+1]+k<=5 && v[i+2]+k<=5){
            sum+=1;
        }
    }
    cout<<sum;
    return 0;
}