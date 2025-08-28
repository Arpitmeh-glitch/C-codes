// write a program to create a voting machine for three candidates and display the person with highest number of votes using switch case//
#include <stdio.h>
int main()
{
    int vote;
    int a = 0, b = 0, c = 0;

    printf("Enter 1 for candidate  1 \n Enter 2 for candidate 2 \n Enter 3 for candidate 3 ");
    scanf("%d", &vote);
    switch (vote)
    {
    case 1:
        printf("you voted for  candidate1 :");
        a = a + 1;
        break;
    case 2:
        printf("you voted for candidate2 :");
        b = b + 1;
        break;
    case 3:
        printf("you voted for candidate3 :");
        c = c + 1;
        break;
    }
    if ((a > b) && (a > b))
    {
        printf(" candidate1 is the winner !! ");
    }
    else if ((b > a) && (b > c))
    {
        printf("candidate2 is the winner !!");
    }
    else if ((c > a) && (c > b))
    {
        printf("candidate3 is the winner !!");
    }
    return 0;
}