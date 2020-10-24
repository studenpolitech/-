#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
     int N, K, T;
    setlocale(LC_ALL, "Rus");
    printf("введите K , лежащее в промежутке от 0 до 365 : ");
    scanf("%d", &K) ;
    printf("введите N , лежащее в промежутке от 1 до 7 : ");
    scanf("%d", &N) ;
    T=((N+K-2)%7)+1;
 
 printf("номер дня недели равен %d", T);
     
 
 return 0;
}