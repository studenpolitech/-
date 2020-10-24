#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
     int N, S, T, K, M;
    setlocale(LC_ALL, "Rus");
    printf("введите количество секунд, прошедших с начала суток ");
    scanf("%d", &S) ;   
 T=S/60;
 K=T*60;
 M=S-K;
 printf("Секунд , прошедших с момента последней минуты равно:%d ", M);
 return 0;
}