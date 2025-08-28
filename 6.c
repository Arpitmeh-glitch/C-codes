#include <stdio.h>
int main()
{
    int i, count = 0, sum;
    for (i = 10; i <= 70; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d", i);
            count++;
        }
        if (count == 12)
        {
        }
    }

    return 0;
}
// write a program to create a voting machine for three candidates and display the person with highest number of votes using switch case//