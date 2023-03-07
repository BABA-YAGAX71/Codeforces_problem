#include<stdio.h>
int main(){
    int n,k,i,x[50],count=0;
    scanf("%d %d",&n,&k);

    for(i=0; i<n ;i++)
        scanf("%d",&x[i]);
    for(i=0; i<n ; i++){
        if(x[i] >= x[k-1] && x[i] > 0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}