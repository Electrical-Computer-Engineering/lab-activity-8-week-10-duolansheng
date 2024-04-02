//116454458 duolan Sheng

#include "stdio.h"

#define MAX 32
int my_strcmp(char str1[], char str2[]) {
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] == '\0' && str2[i] == '\0'){
            return 0;
        } else if (str1[i] == '\0') {
            return -1;
        } else {
            return 1;
        }
    }
}

int main() {
    char s1[MAX], s2[MAX];

    printf("Enter string1: ");
    scanf("%s", s1);
    getchar();

    printf("Enter string2: ");
    scanf("%s", s2);
    getchar();

    int t = my_strcmp(s1, s2);

    if(t == 0) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }
}
//116454458 Duolan Sheng
#include "stdio.h"

#define MAX 32
int my_strncmp(char str1[], char str2[], int n) {
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        n--;
        if (n == -1 || (str1[i] == '\0' && str2[i] == '\0')) {
            return 0;
        } else {
            return 1;
        }
    }
}

int main() {
    int n;
    char s1[MAX], s2[MAX];

    printf("Enter number to compare: ");
    scanf("%d", &n);

    printf("Enter string1: ");
    scanf("%s", s1);
    getchar();

    printf("Enter string2: ");
    scanf("%s", s2);
    getchar();

    int t = (s1, s2, n);

    if(t == 0) {
        printf("The two strings are equal for the first n characters.\n");
    } else {
        printf("The two strings are not equal for the first n characters.\n");
    }
}
//116454458 Duolan Sheng
#include "stdio.h"

char *my_strcpy(char *dest[], char *src[]) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src [i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main() {
    char src[32], dest[32];

    printf("Enter string1: ");
    scanf("%s", src);
    getchar();

    printf("Enter string2: ");
    scanf("%s", dest);
    getchar();

    my_strcpy(dest, src);

    printf("%s", dest);

    return 0;
}
//116454458 Duolan Sheng
#include "stdio.h"

int *my_strcat(char dest[], char src[]) {
    char *start = dest;

    while (*dest) {
        dest++;
    }

    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';

    return start;
}

int main() {
    char str1[32];
    char str2[32];

    printf("Enter string1: ");
    scanf("%s", str1);
    getchar();

    printf("Enter string2: ");
    scanf("%s", str2);
    getchar();

    char *result = my_strcat(str1, str2);
    printf("Concatenated string using my_strcat: %s\n", result);

    return 0;
}

