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


int main(){

   fucking_fast;
   int n;
   cin>>n;
   int arr[n];
   for(int  i = 0;i<n;i++)
   cin>>arr[i];
 
   int l = 0;int r = n-1;
   int s = 0;int d = 0;int turn = 0;
   while(l<=r)
   {
        if(turn==0)
        {
             if(arr[l]>=arr[r])
             {
             	s+=arr[l];l++;
             }
             else
             {
             	s+=arr[r];r--;
             }
        }
        else
        {
          if(arr[l]>=arr[r])
             {
             	d+=arr[l];l++;
             }
             else
             {
             	d+=arr[r];r--;
             }
        }
        turn^=1;
   }
 
   cout<<s<<" "<<d<<endl; 

    dead;

}