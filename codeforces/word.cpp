#include<bits/stdtr1c++.h>
using namespace std;
 int main(){
    string h;
    cin>>h;
    int up=0,low =0;
    for(int i=0;i<h.size();i++){
        if(isupper(h[i])){
            up++;

        }
        else{
            low++;
        }
    }
    if(up>low){
        for(int i=0;i<h.size();i++){
            h[i]=toupper(h[i]);
        }
        cout<<h<<endl;
    }
    else if(low>up){
        for(int i=0;i<h.size();i++){
            h[i]=tolower(h[i]);
        }
        cout<<h<<endl;
    }
    else if(up==low){
        for(int i=0;i<h.size();i++){
            h[i]=tolower(h[i]);
        }
        cout<<h<<endl;
    }
    return 0;
}