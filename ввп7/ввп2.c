#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    float a, r;
    setlocale(LC_ALL, "Rus");
    printf("Введите значение угла в радианах ");
    scanf("%f", &a);
    if (a<2*3.1415 && a>0){
    r= 180*a/3.14;
    printf("Значение вашего угла в градусах равно  %f", r);
    }
    else{
        printf("Введите угл от 0 до 2 pi ");
    }

    return 0;
}