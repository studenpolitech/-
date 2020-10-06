#include<stdio.h>
#include<locale.h>
int main(){
    int A=3, K;
    K=A*A;
    A=K*K;
    A=A*A;
    
    printf("% d", A);

    return 0;
}