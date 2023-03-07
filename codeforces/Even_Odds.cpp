#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t a,b;
    cin>>a>>b;

    if(b<=(a+1)/2){
        cout<<b*2-1;
    }
    else{
        cout<<(b-(a+1)/2) * 2<<endl;
    }
    return 0;
}



