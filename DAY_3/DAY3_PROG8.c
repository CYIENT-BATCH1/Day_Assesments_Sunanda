8)Write program to check given i/p by user is alphabet or not alphabet using conditional operator

#include <stdio.h>
int main() {
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        printf("%c is an alphabet.", a);
    else
        printf("%c is not an alphabet.", a);

    return 0;
}
