#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    int n,a[100],j=0,bej=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            j++;
        }
        else{
            bej++;
        }
    }
    if(j>bej){
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                cout<<i+1;
                break;
            }
        }

    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                cout<<i+1;
                break;
            }
        }

    }
}