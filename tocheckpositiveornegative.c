#include<stdio.h>
int main(){
    int a;
    printf("enter a number to check:");
    scanf("%d",&a);
    if(a>0) {
        printf("A is positive");
    } else if(a<0) {
        printf("A is negative");
    } else {
        printf("A=0");
    }
    return 0;
}
