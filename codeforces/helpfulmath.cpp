#include<bits/stdc++.h>
using namespace std;
int main(){
    string h;
    cin>>h;
    for(int i=0;i<h.size();i+=2){
        for(int j=0;j<h.size()-1;j+=2){
            if(h[j]>h[j+2]){
                swap(h[j], h[j+2]);
            }
        }
    }
    cout<<h<<endl;
    return 0;
}