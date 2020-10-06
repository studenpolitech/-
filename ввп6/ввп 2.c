#include<stdio.h>
int main(){
    int a=4, b=7, c=0, k, f; 
    k=a;
    f=b;
    b=a;
    a=c;
    c=f;
    
    printf("%d", a);
        printf("%d", b);
    printf("%d", c);

    return 0;
}