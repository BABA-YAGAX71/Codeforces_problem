#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a],max=0,min=110,maxi,mini;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            maxi=i;
        }
        if(arr[i]<=min){
            min=arr[i];
            mini=i;
        }
    }
    if(maxi>mini){
        mini++;
    }
    cout<<maxi+(a-1)-mini<<endl;
}