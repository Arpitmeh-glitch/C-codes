#include <stdio.h>
int main()
{
    int count = 0;
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
        if (ch == ' ')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}