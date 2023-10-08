
#include<bits/stdc++.h>
using namespace std;
#define lower(s)        transform(s.begin(),s.end(),s.begin(), ::tolower)


void solve() {
 
    int n;
    string s;
 
    cin>> n >> s;
 
    lower(s);
 
    string cs= "meow";
    int c = 0;
 
    for (int i = 0; i < n;i++) {
        if (c==4) {
            cout<<"No"<<endl;
            return;
        }
        if (s[i] == cs[c]) {
            while (s[i] == cs[c]) {
                i++;
            }
            i--;
        } else {
            cout<<"No"<<endl;
            return;
        } 
        c++;
    } 
    if (c<4){
        cout<<"No"<<endl;
        return;
    }
 
 
 
    cout<<"Yes"<<endl;
 
 
}
 
 
int main() {

    int t;
    cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}