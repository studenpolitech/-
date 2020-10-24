#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
     int A, B, C, S1, S2, S0, O;
    setlocale(LC_ALL, "Rus");
    printf("A= ");
    scanf("%d", &A) ;
    printf("B= ");
    scanf("%d", &B) ;
    printf("C= ");
    scanf("%d", &C) ;
   S1=A*B;
   S2=C*C;
    S0=S1/S2;
    O=S1-S2*S0;
    printf("количество квадратов размещенных в прямоугольнике равно %d ", S0);
    printf("\nнезанятая площадь равна %d ", O);
 
 return 0;
}