#include<bits/stdc++.h>
using namespace std;

int main(){
    char d;
    cin>>d;

    string s;
    cin>>s;

    string a ="qwertyuiopasdfghjkl;zxcvbnm,./",ans ="";
    if(d=='R'){
        for(int i=0;i<s.size();i++){
            for(int j=0;j<a.size();j++){
                if(s[i] == a[j]){
                    ans+=a[j-1];
                }
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            for(int j=0;j<a.size();j++){
                if(s[i] == a[j]){
                    ans+=a[j+1];
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}