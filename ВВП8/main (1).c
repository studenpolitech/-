

#include <stdio.h>
#include<math.h>

int main()
{
 int y,  x;
    printf("Введите размер файла в байтах ");
    scanf("%d", &x);
    y= (x/1024);
        printf("Размер данного файла в Кб равен %d", y);


    return 0;
}
