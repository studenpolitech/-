#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    float a, r;
    setlocale(LC_ALL, "Rus");
    printf("Введите значение угла в градусах ");
    scanf("%f", &a);
    if (a<360 && a>0){
    r= a*3.1415/180;
    printf("Значение вашего угла в радианах равно  %f", r);
    }
    else{
        printf("Введите угл от 0 до 360 градусов ");
    }

    return 0;
}