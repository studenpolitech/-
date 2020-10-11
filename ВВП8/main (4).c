#include <stdio.h>
#include<math.h>

int main()
{
 int A, x ;
    printf("Введите двузначое число ");
    scanf("%d", &A);
    if(A>0&&A<100){
    x= A %10*10+ A/10;
    printf("Число ,полученное перестановкой цифр:%d ", x);
    }
    else{
           printf("false ");
 
    }
    return 0;
}