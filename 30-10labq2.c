#include <stdio.h>

int main()
{
    FILE *fp;

    char ch;

    fp = fopen("hi.txt", "r");

    if (fp == NULL)
    {
        printf("file does not exist");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
