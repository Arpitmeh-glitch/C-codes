#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character\t");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("%c is a Vowel", ch);
    }
    else
    {
        printf("%c is a consonant", ch);
    }
    return 0;
}