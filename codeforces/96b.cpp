
 

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

long long result;
int n;
void add(long long x,int d)
{
	if(x<result)
	{
		if(x>=n&&!d)
			result=x;
		else
		{
			add(x*10+4,d+1);
			add(x*10+7,d-1);
		}
	}
}
int main()
{
    FIO;
	cin>>n;
	result=1e16+7;
	add(4,1);
	add(7,-1);
	cout<<result<<endl;
	return 0;
}