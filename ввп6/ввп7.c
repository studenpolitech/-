#include<stdio.h>
#include<locale.h>
int main(){
    int A=2, K, G;
    A=A*A*A;
    G=A*A; 
    K=G*G;
    A=K*A;
    
    printf("% d", A);

    return 0;
}