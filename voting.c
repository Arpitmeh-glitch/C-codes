#include <stdio.h>
int main()
{
    int vote;
    int a = 0, b = 0, c = 0;
    char ch;
    printf("Do you want to cast a vote type y for yes and n for no (y/n)");
    scanf("%c", &ch);
    while (ch == 'y')
    {

        printf("Enter 1 for Candidate 1 \n Enter 2 for candidate 2 \n Enter 3 for candidate 3 ");
        scanf("%d", &vote);
        switch (vote)
        {
        case 1:
            printf("you voted for Candidate 1 :");
            a = a + 1;
            break;
        case 2:
            printf("you voted for candidate 2 :");
            b = b + 1;
            break;
        case 3:
            printf("you voted for candidate 3:");
            c = c + 1;
            break;
        }
        printf("cast vote again :(y/n)");
        scanf("%c", &ch);
    }
    if ((a > b) && (a > b))
    {
        printf(" candiadte 1 is the winner !! ");
    }
    else if ((b > a) && (b > c))
    {
        printf("candidate 2 is the winner !!");
    }
    else if ((c > a) && (c > b))
    {
        printf("candidate 3 is the winner !!");
    }
    return 0;
}