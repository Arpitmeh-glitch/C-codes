#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character");
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}