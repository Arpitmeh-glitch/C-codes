// wap to apply bitwise or & and ! operators
#include <stdio.h>

int main()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    int andresult = a & b;
    int orresult = a | b;
    int notresult = !a;
    printf("the result for and operator is %d\n", andresult);
    printf("the result for or operator is %d\n", orresult);
    printf("the result of not operator is %d\n", notresult);

    return 0;
}
