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
    y=4*pow(x-3, 6)-7*pow(x-3, 3)+2;
    printf("%d", y);

    return 0;
}
