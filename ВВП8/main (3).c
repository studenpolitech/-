#include <stdio.h>
#include<math.h>

int main()
{
 int A,  B, X, Z ;
    printf("Введите положительное A ");
    scanf("%d", &A);
        printf("Введите положительное B ");
            scanf("%d", &B);
            if(A>B&&A>0&&B>0){
                X=A/B;
                Z=A-(X*B);
                
                        printf(" Длина незанятой части отрезка А равна %d ",Z );

            }
            else{
                        printf("не выполнены все условия  ");
            }

    return 0;
}