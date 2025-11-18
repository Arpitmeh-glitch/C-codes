// wap to apply >, < operator??
#include <stdio.h>
int main()
{
    int a;
    printf("enter one number:\n");
    scanf("%d\n", &a);
    int rightshift = a >> 1;
    int leftshift = a << 1;
    printf("\noriginal value of a=%d\n", a);
    printf("right shift =%d\n , leftshift=%d\n", rightshift, leftshift);
}