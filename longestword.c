#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1000], word[100], longest[100];
    int i = 0, j = 0, maxlenght = 0, len = 0;

    printf("enter a sentence= ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ' && sentence[i] != '\n')
        {
            word[j++] = sentence[i];
        }
        else
        {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxlenght)
            {
                maxlenght = len;
                strcpy(longest, word);
            }
            j = 0;
        }
    }

    word[j] = '\0';
    len = strlen(word);
    if (len > maxlenght)
    {
        strcpy(longest, word);
    }

    printf("longest word = %s\n", longest);
    return 0;
} //
