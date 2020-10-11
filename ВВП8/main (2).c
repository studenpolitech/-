

#include <stdio.h>
#include<math.h>

int main()
{
 int A,  B, X;
    printf("Введите положительное A ");
    scanf("%d", &A);
        printf("Введите положительное B ");
            scanf("%d", &B);
            if(A>B&&A>0&&B>0){
                X=A/B;
                        printf(" Количество отрезков B ,которые помещаются в А равно %d",X );

            }
            else{
                        printf("не выполнены все условия  ");
            }

    return 0;
}
