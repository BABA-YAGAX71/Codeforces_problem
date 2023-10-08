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

int main()
{
        fucking_fast;
        int t;
        cin>>t;
        while(t--)
        {
        int n;
        cin>>n;
        vector<int> v;
        int o=0,e=0,c=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
            if(x%2==0)e++;
            else o++;
         }
        if(o==e||e==o+1)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    if(v[i]%2==0)
                        continue;
                    else 
                    c++;
                }
                else
                {
                    if(v[i]%2==1)
                        continue;
                    else c++;
                }
            }
            cout<<c/2<<endl<<endl;
        }
        else
        {
            cout<<-1<<endl<<endl;
        }
    }
    dead;

}