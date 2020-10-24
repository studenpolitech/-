#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
     int N, S, T, K, M;
    setlocale(LC_ALL, "Rus");
    printf("введите K , лежащее в промежутке от 0 до 365: ");
    scanf("%d", &K) ;   
 M=K/7;
 S=M*7;
 T=K-S;
 printf("номер дня недели равен %d", T);
     
 
 return 0;
}