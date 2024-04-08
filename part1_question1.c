//116454458 Duolan Sheng

#include "stdio.h"

int my_isalpha(char c) {
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

int my_isdigit(char c) {
    if(c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

int my_is_upper(char c) {
    if(c >='A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

char my_to_upper(char c) {
    if(c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    } else {
        return c;
    }
}

char my_to_lower(char c){
    if(c >= 'A' && c <= 'Z') {
        return c - 'A' +'a';
    } else {
        return c;
    }
}

int main() {
    char c1, c2;

    {//part1 Q1
        printf("Enter a character1: ");
        scanf("%c", &c1);
        getchar();

        printf("Enter a character2: ");
        scanf("%c", &c2);
        getchar();

        int t = my_isalpha(c1);
        int p = my_isalpha(c2);

        if (t == 1) {
            printf("%c is a alpha.\n", c1);
        } else {
            printf("%c is not a alpha.\n", c1);
        }

        if (p == 1) {
            printf("%c is a alpha.\n", c2);
        } else {
            printf("%c is not a alpha.\n", c2);
        }
    }

    {//part1 Q2
        printf("Enter a character1: ");
        scanf("%c", &c1);
        getchar();

        printf("Enter a character2: ");
        scanf("%c", &c2);
        getchar();

        int t = my_isdigit(c1);
        int p = my_isdigit(c2);

        if (t == 1) {
            printf("%c is a digit.\n", c1);
        } else {
            printf("%c is not a digit.\n", c1);
        }

        if (p == 1) {
            printf("%c is a digit.\n", c2);
        } else {
            printf("%c is not a digit.\n", c2);
        }
    }

    {//part1 Q3
        printf("Enter a character1: ");
        scanf("%c", &c1);
        getchar();

        printf("Enter a character2: ");
        scanf("%c", &c2);
        getchar();

        int t = my_is_upper(c1);
        int p = my_is_upper(c2);

        if (t == 1) {
            printf("%c is a upper-case letter.\n", c1);
        } else {
            printf("%c is not a upper-case letter.\n", c1);
        }

        if (p == 1) {
            printf("%c is a upper-case letter.\n", c2);
        } else {
            printf("%c is not a upper-case letter.\n", c2);
        }
    }

    {//part1 Q4
        printf("Enter a character1: ");
        scanf("%c", &c1);
        getchar();

        printf("Enter a character2: ");
        scanf("%c", &c2);
        getchar();

        char t = my_to_upper(c1);
        char p = my_to_upper(c2);

        printf("%c\n", t);
        printf("%c\n", p);
    }

    {//part1 Q5
        printf("Enter a character1: ");
        scanf("%c", &c1);
        getchar();

        printf("Enter a character2: ");
        scanf("%c", &c2);
        getchar();

        char t = my_to_lower(c1);
        char p = my_to_lower(c2);

        printf("%c\n", t);
        printf("%c\n", p);
    }

    return 0;
}