#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int p=0,cr=0;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            p+=x;
        }
        else{
            if(p<1){
                ++cr;
            }
            else{
                --p;
            }
        }
    }
    cout<<cr<<endl;
    return 0;
}