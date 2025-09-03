#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, dis, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    dis = b * b - 4 * a * c;

    if (dis > 0)
    {
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
        printf("Roots are real and different: %.2f, %.2f\n", r1, r2);
    }
    else if (dis == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and same: %.2f\n", r1);
    }
    else
    {
        printf("Roots are complex\n");
    }

    return 0;
}