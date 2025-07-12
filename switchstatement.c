#include <stdio.h>

int main() {
    char dayofweek = '\0';

    printf("Enter a day of the week (M,T,W,U,F,S,R): ");
    scanf(" %c", &dayofweek); // Note the space before %c to consume any leftover newline

    switch(dayofweek) {
        case 'M':
        case 'm':
            printf("It is Monday\n");
            break;

        case 'T':
        case 't':
            printf("It is Tuesday\n");
            break;

        case 'W':
        case 'w':
            printf("It is Wednesday\n");
            break;

        case 'U':
        case 'u':
            printf("It is Thursday\n");
            break;

        case 'F':
        case 'f':
            printf("It is Friday\n");
            break;

        case 'S':
        case 's':
            printf("It is Saturday\n");
            break;

        case 'R':
        case 'r':
            printf("It is Sunday\n");
            break;

        default:
            printf("Invalid input! Please enter one of the letters (M, T, W, U, F, S, R).\n");
    }

    return 0;
}

                             
