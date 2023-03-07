#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    string h,n;
    cin>>h>>n;
    reverse(n.begin(), n.end());

    if(h==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}
