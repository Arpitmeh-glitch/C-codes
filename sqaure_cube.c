// q1 wap to accept two numbers from a user and display the squares of even numbers and cubes of odd numbers in that range
// q2 wap to accept a number from a user and check whether that number is present in the fibonaki series executed for 13 numbers
// q3 wap to display all the prime numbers from 1 to 20
// q4 wap to check wether a given character is a vowel or consonant
int main()
{
    int a, b, i;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            int c = i * i;
            printf("the square of %d\t =%d\t/", i, c);
        }
        else
        {
            int d = i * i * i;
            printf("the cube of %d\t = %d\t/", i, d);
        }
    }

    return 0;
}