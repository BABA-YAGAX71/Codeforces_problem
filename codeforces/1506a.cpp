#include <bits/stdc++.h> 
#define ll long long int
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
using namespace std;
 
 
 
 
int main() 
{ 
 ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);   
 
ll t=1;
cin>>t;
 
while(t--)
{
 ll n,m,k;
 cin>>n>>m>>k;
 ll xi=n*(n+1)/2;
 ll y=k%n;
if(y==0)
y=n;
 ll x=k/n;
 if(k%n>0)
 x++;
 if(k==1||k==m*n)
 cout<<k<<endl;
 else
 cout<<m*y-(m-x)<<endl;
 
}
	return 0; 
} 
 