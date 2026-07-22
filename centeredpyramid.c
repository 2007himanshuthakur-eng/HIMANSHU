#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a = *b;
    *b = temp;
}
int main ()
{
    int x=300,y=100;
    swap(&x, &y);
    printf("%d\n%d",x, y);
    return 0;
}
