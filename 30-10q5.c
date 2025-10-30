#include <stdio.h>
int main()
{
    int count = 0, count1 = 0;
    char ch;

    FILE *fp;
    fp = fopen("hi.txt", "r");
    if (fp == NULL)
    {
        printf("file does not exist");
        return 2;
    }
    while ((ch = fgetc(fp)) != EOF)
    {

        count++;
    }
    printf("the number of characters is %d\n", count);
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == ' ')
        {
            count1++;
        }
    }
    printf("the number of words is %d\n", count1);

    return 0;
}