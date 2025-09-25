#include <stdio.h>

int main()
{
    char sentence[1000];
    int i, bets = 0, dig = 0, special = 0;

    printf("enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if ((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z'))
        {
            bets++;
        }
        else if (sentence[i] >= '0' && sentence[i] <= '9')
        {
            dig++;
        }
        else if (sentence[i] != ' ' && sentence[i] != '\n')
        {
            special++;
        }
    }

    printf("number of alphabets= %d\t", bets);
    printf("number of digits= %d\t", dig);
    printf("number of special characters= %d\t", special);

    return 0;
}
