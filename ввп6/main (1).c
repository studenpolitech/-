#include<stdio.h>
int main(){
    int a=4, b=6, k;
    k=a;
    a=b;
    b=k; 
    printf(" a = %d ", a); 
        printf("b = %d ", b); 
        return 0;
}