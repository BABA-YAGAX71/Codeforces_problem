#include<stdio.h>
int main(){
    long long int a,b,c,len,bre,k=0;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a%c==0){
        len=a/c;
    }
    else if(a%c != 0){
        len=(a/c)+1;
    }
    if(b%c==0){
        bre=b/c;
    }
    else if(b%c != 0){
        bre=(b/c)+1;
    }
    k = (len*bre);
    printf("%lld",k);
    return 0;
    
}