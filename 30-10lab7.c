
#include <stdio.h>
#include <string.h>
int main()
{
    char large[100];
    char ch;
    int maxlen = 0;
    FILE *fp;
    fp = fopen("hi.txt", "r");
    if (fp == NULL)
    {
        printf("FIle Doesn'nt exixt");
    }
    while (fscanf(fp, "%s", large) == 1)
    {
        int len = strlen(large);
        if (len > maxlen)
        {
            maxlen = len;
        }
    }
    printf("%d", maxlen);
    fclose(fp);
    return 0;
}