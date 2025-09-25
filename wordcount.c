#include <stdio.h>

int main()
{
    char sentence[1000];
    int i, wc = 0;

    printf("enter a sentence= ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if ((i == 0 && sentence[i] != ' ' && sentence[i] != '\n') ||
            (sentence[i] != ' ' && sentence[i] != '\n' && (sentence[i - 1] == ' ' || sentence[i - 1] == '\n')))
        {
            wc++;
        }
    }

    printf("number of words in the sentence= %d\n", wc);

    return 0;
} //
