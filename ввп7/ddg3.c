#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    float A=1500, X=2, Y, F, P;
    setlocale(LC_ALL, "Rus");
    F=1*A/X;
        printf("1 кг конфет стоит %.1f ", F);
            printf("\nВведите сколько кг конфет вам надо купить: ");
                scanf("%f", &Y);


    P=Y*A/X;
    printf( "%.2f ", Y);
        printf( "кг конфет стоит %.1f ", P);


    
    

    return 0;
}