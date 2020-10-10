#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    float A, B, X;
    setlocale(LC_ALL, "Rus");
    printf("Введите коэффициент А ");
    scanf("%f", &A);
    printf("Введите коэффициент B ");
    scanf("%f", &B);
    if(A!=0){
    X=-B/A;
     printf("Х равен %.2f", X);
    }
    else{
           printf("Коэффициент А не должен быть равен 0");
 
    }
        return 0;
}
