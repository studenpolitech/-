#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    float  V1, V2, T0, T, S0, S1, S2;
    setlocale(LC_ALL, "Rus");
    printf("введите количество часов ");
    scanf("%f", &T);
    printf("введите скорость первого автомобиля ");
    scanf("%f", &V1);
    printf("введите скорость второго автомобиля ");
    scanf("%f", &V2);
    printf("введите  изначальное расстояние между машинами ");
    scanf("%f", &S0);
    
    
    S1=V1*T;
    S2=V2*T;
    T0=S1+S2+S0;
    printf("Расстояние между автомобилями равно %.2f ", T0);
    printf("км");
    
    return 0;
}