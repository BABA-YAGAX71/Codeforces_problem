#include<bits/stdc++.h>
using namespace std;
#define   fo(number1,number2,number3)  		for(int number1=number2;number1<=number3;++number1)


int main(){
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    while(b--){
       fo(i,0,a-2){
        if(s[i]=='B' && s[i+1]=='G'){
            swap(s[i],s[i+1]);
            i++;
        }
        
       }
    }
    cout<<s<<endl;
    return 0;
}