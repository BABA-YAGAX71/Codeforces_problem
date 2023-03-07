#include<stdio.h>
int main(){
    int a,p,t,v,k=0;
    scanf("%d",&a);

    for(int i=0 ; i<a ; i++){
        scanf("%d %d %d",&p,&t,&v);
        if((p==1 && t==1)||(t==1 && v==1)||(v==1 && p==1)){
            k++;
        }
    }
    printf("%d",k);
    return 0;
}