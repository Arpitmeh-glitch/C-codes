 // wap to accept a string from a user and count the number of a in that string
#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

     
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {    
        }
    }

    printf("The letter 'a' appears %d times in the string.\n", count);
return 0;
}