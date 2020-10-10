#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
    float A1, A2, B1, B2, C1, C2, x, y, D, dx, dy;
    setlocale(LC_ALL, "Rus");
    printf("Введите коэффициент А1 ");
    scanf("%f", &A1);
    printf("Введите коэффициент А2 ");
    scanf("%f", &A2);
    printf("Введите коэффициент B1 ");
    scanf("%f", &B1);
    printf("Введите коэффициент B2 ");
    scanf("%f", &B2);
    printf("Введите коэффициент C1 ");
    scanf("%f", &C1);
    printf("Введите коэффициент C2 ");
    scanf("%f", &C2);
    D=(B2*A1)-(A2*B1);
    if (D==0){
           printf("Уравнение не имеет решений  ");
    }
    else{
    dx=(B2*C1)-(C2*B1);
    dy=(C2*A1)-(A2*C1);
    x=dx/D;
    y=dy/D;
    printf(" х равен %.2f ", x);
    printf(" y равен %.2f ", y);
    } 
        return 0;
}
