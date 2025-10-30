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
        count++;
    }
    fclose(fp);
    if (count == 0)
    {
        printf("the file is empty");
    }
    else
    {
        printf("the file contains something");
    }
    return 0;
}