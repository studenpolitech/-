#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
     int A, B;
    setlocale(LC_ALL, "Rus");
    printf("введите год: ");
    scanf("%d", &A);
    B=A/100;
    B=B+1;
    printf("номер столетия равен %d ", B);
 
 return 0;
}