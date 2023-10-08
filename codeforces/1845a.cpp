
 

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
const int N=1e6+10;
const int SN=1e4+10;
const int SSN=50; 
const int inf=0x3f3f3f3f;
 
int b[N];
int mod=1e9+7;
int dp[2000][2000];
 
void solve(){
int a[110];
	int n,k,x;
	cin>>n>>k>>x;
 
	if(x!=1)	
	{cout<<"yes\n"<<n<<"\n";
		for(int i=1;i<=n;i++)
	cout<<1<<" ";
	return ;}
	if(k>=n&&x!=n)
	{
		cout<<"yes\n"<<1<<"\n";
	cout<<n;
	return ;
	}
	
	else{
		if(n%2==0)
		{
			if(k>=2)
			{
				cout<<"yes\n"<<n/2<<"\n";
				for(int i=1;i<=n/2;i++)
				cout<<2<<" ";
			return ;}
			
		}
		if(n%2==1)
		{
			if(k>=3)
			{
				cout<<"yes\n"<<n/2<<"\n";
				for(int i=1;i<=n/2-1;i++)
					cout<<2<<" ";
				cout<<3;
				return ;
			}
			
		}
		
		
		
	}
	
	
	
	
	cout<<"no";
	
	
	
	
	
}
 
	
 
 
main()
{
    

	int t;
	
	t=1;
	
	cin>>t;
	
	while(t--)
	{
		solve();
		puts("");
	}
return 0;
	
}
 