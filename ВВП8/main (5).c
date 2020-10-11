#include <stdio.h>
#include<math.h>

int main()
{
 int A, x ;
    printf("Введите трехзначное  число ");
    scanf("%d", &A);
    if(A>0&&A<1000){
    x= A%100*10+A/100;
    printf("Число ,полученное перестановкой цифр:%d ", x);
    }
    else{
           printf("false ");
 
    }
    return 0;
}