#include<stdio.h>
int main(){
    int a,X=0,i;
    char s[10];
    scanf("%d",&a);

    for(i=0 ; i<a ; i++){
        scanf("%s",&s);

        if(s[1] == '+'){
            X++;
        }
        else{
            X--;
        }
    }
    printf("%d\n",X);
    return 0;
}