#include <stdio.h>
int main()
{

    char ch;
    FILE *fp;
    fp = fopen("hi.txt", "r");
    char str1 = fgetc(fp);
    if (fp == NULL)
    {
        printf("FIle Doesn'nt exixt");
    }
    else
    {
        while ((ch = fgetc(fp)) != EOF)
        {
            if (ch == '\n')
            {
                printf("\n");
            }
            printf("%c", ch);
        }
    }
    fclose(fp);
    return 0;
}