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


int main() { 

    fucking_fast;

    int tt; 
    cin >> tt; 
    while (tt--) { 
    int n; 
    cin >> n; 
    pair<int, int>arr[n]; 
    for (int i = 0; i < n; i++) 
    cin >> arr[i].first >> arr[i].second; 
    int ans = 1e9; 
    sort(arr, arr + n); 
    for (int i = 0; i < n; i++) { 
    if (arr[i].second % 2 == 0)  
    arr[i].second = arr[i].second - 1; 
    ans = min(ans, arr[i].first + arr[i].second / 2); 
  } 
  cout << ans << std::endl; 
} 
return 0; 
}





