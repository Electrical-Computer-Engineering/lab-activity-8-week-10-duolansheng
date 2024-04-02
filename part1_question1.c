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

int my_to_upper(char c) {
    if(c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    } else {
        return c;
    }
}

int my_to_lower(char c){
    if(c >= 'A' && c <= 'Z') {
        return c - 'A' +'a';
    } else {
        return c;
    }
}

int main() {
    char c1, c2;

    printf("Enter a character1: ");
    scanf("%c", &c1);
    getchar();

    printf("Enter a character2: ");
    scanf("%c", &c2);
    getchar();

    int t = my_isalpha(c1);
    int p = my_isalpha(c2);

    if(t == 1) {
        printf("%c is a alpha.\n", c1);
    } else {
        printf("%c is not a alpha.\n", c1);
    }

    if(p == 1) {
        printf("%c is a alpha.\n", c2);
    } else {
        printf("%c is not a alpha.\n", c2);
    }

    printf("Enter a character1: ");
    scanf("%c", &c1);
    getchar();

    printf("Enter a character2: ");
    scanf("%c", &c2);
    getchar();

    t = my_isdigit(c1);
    p = my_isdigit(c2);

    if(t == 1) {
        printf("%c is a digit.\n", c1);
    } else {
        printf("%c is not a digit.\n", c1);
    }

    if(p == 1) {
        printf("%c is a digit.\n", c2);
    } else {
        printf("%c is not a digit.\n", c2);
    }

    printf("Enter a character1: ");
    scanf("%c", &c1);
    getchar();

    printf("Enter a character2: ");
    scanf("%c", &c2);
    getchar();

    t = my_is_upper(c1);
    p = my_is_upper(c2);

    if(t == 1) {
        printf("%c is a upper-case letter.\n", c1);
    } else {
        printf("%c is not a upper-case letter.\n", c1);
    }

    if(p == 1) {
        printf("%c is a upper-case letter.\n", c2);
    } else {
        printf("%c is not a upper-case letter.\n", c2);
    }

    printf("Enter a character1: ");
    scanf("%c", &c1);
    getchar();

    printf("Enter a character2: ");
    scanf("%c", &c2);
    getchar();

    char m = my_to_upper(c1);
    char n = my_to_upper(c2);

    printf("%c\n", m);
    printf("%c\n", n);

    printf("Enter a character1: ");
    scanf("%c", &c1);
    getchar();

    printf("Enter a character2: ");
    scanf("%c", &c2);
    getchar();

    m = my_to_lower(c1);
    n = my_to_lower(c2);

    printf("%c\n", m);
    printf("%c\n", n);
}
