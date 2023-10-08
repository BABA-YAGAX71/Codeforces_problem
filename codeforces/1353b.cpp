
 

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
#define in2(x1,x2) cin >> x1 >> x2
void go1(){
        int n, k;in2(n, k);
        ll a[n], b[n];
        ll i, j;
        ll sum = 0;
        for(int i=0;i<n;i++){
                cin >> a[i];
                sum += a[i];
        }
        for(int i=0;i<n;i++) {
                cin >> b[i];
        }        
        sort(b, b+n, greater<int>());
        sort(a, a+n);
        i = 0;
        while(i < n && k > 0){
                if(b[i] > a[i]){
                        k--;
                        sum -= a[i];
                        sum += b[i];
                }
                else{
                        break;
                }
                i++;
        }
        cout << sum << endl;
}

int main(){

        FIO;
        ll t;
        cin>>t;
        while(t--){
                go1();
        }
        return  0;
}
 