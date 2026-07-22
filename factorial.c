#include<stdio.h>
int main(){
    int i, n, fact=1;
    printf("enater a number:");
    scanf("%d", &n);
    if(n==0 || n==1){
        printf("factorial=1");
    }
    else{
        for(i=1; i<=n; i++){
        fact*= i;
        printf("%d\n", fact);
    }
    }
    return 0;
}
