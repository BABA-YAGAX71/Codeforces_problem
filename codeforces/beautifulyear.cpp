#include<bits/stdc++.h>
using namespace std;
int main(){
    int h;
    int a,b,c,d,to;
    cin>>h;
    while(1){
        h++;
        to=h;
        a=h%10;
        h=h/10;
        b=h%10;
        h=h/10;
        c=h%10;
        h=h/10;
        d=h%10;
        if(a!=b && b!=c && c!=d && a!=d && a!=c && b!=d)
        {
        cout<<to;
        break;
        }
        h=to;
    }    
return 0;
}
