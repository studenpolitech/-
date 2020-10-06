/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    y= 3*pow(x,6)-6*x*x-7;
    printf("%d", y);

    return 0;
}
