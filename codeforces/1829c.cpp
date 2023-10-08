#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{   
    ios;
    
    ll t;
    cin>>t;

    while(t--) {
        ll n,commonMin = INT_MAX, leftMin = INT_MAX, rightMin = INT_MAX;
        cin>>n;
        ll mins;
        string skill;
        for(ll i = 0 ; i < n ;i++) {
            cin>>mins;
            cin>>skill;
            if(skill[0] == '1' and skill[1] == '1') {
                commonMin = min(commonMin,mins);
            }
            else if(skill[0] == '1') {
                leftMin = min(leftMin,mins);
            }
            else if(skill[1] == '1') {
                rightMin = min(rightMin,mins);
            }
        }
        if(commonMin!=INT_MAX) {
            if(leftMin!=INT_MAX and rightMin!=INT_MAX) {
                cout<<min(commonMin,leftMin+rightMin);
            }
            else {
                cout<<commonMin;
            }
        }
        else {
            if(leftMin != INT_MAX and rightMin != INT_MAX) {
                cout<<(leftMin+rightMin);
            }
            else {
                cout<<"-1";
            }
        }
        cout<<endl;
    }
    return 0;     
 }