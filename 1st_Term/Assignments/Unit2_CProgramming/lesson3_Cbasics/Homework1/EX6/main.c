#include <stdio.h>
#include <stdlib.h>
/*Write Source Code to Swap Two Numbers*/
int main()
{
    float a, b, temp;
    printf("Enter value of a: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &a);
    printf("Enter value of b: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping, value of a = %g\n", a);
    printf("After swapping, value of b = %g", b);

}
