//116454458 Duuolan Sheng

#include "stdio.h"
#include "string.h"
#define MAX 32

int my_strcmp(char str1[], char str2[]) {
    int length1 = 0, length2 = 0;
    length1 = strlen(str1);
    length2 = strlen(str2);

    if(length1 != length2) {
        return 1;
    }

    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return 1;
        }
    }

    return 0;
}

int my_strncmp(char str1[], char str2[], int n) {
    int length1, length2;
    int compare;

    length1 = strlen(str1);
    length2 = strlen(str2);

    if(length1 > length2) {
        compare = length2;
    } else {
        compare = length1;
    }

    if(compare > n) {
        compare = n;
    }

    for (int i = 0; i < compare; i++) {
        if (str1[i] != str2[i]) {
            return 1;
        }
    }

    return 0;
}

char *my_strcpy(char dest[], char src[]) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *my_strcat(char dest[], char src[]) {
    int i = 0;
    int dest_len = 0;

    while (dest[dest_len] != '\0') {
        dest_len++;//get dest length
    }

    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;// copy src after dest
    }

    dest[dest_len + i] = '\0';// end of dest
    return dest;
}

char *my_reverse(char dest[], char src[]) {
    int src_length = 0;

    while (src[src_length] != '\0') {
        src_length++;
    }

    for (int i = src_length - 1; i >= 0; i--) {
        dest[src_length - i - 1] = src[i];
    }

    dest[src_length] = '\0';

    return dest;
}

int main () {
    //part2 Q1
    char s1 [MAX] = "a", s2[MAX];
    
    printf("s1: ");
    scanf("%s", s1);
    getchar();

    printf("s2: ");
    scanf("%s", s2);
    getchar();

    int t = my_strcmp(s1, s2);

    if (t == 0) {
        printf("%s and %s are equal\n", s1, s2);
    } else {
        printf("%s is greater than %s\n", s1, s2);
    }
   
    printf("s3: ");
    scanf("%s", s1);
    getchar();

    printf("s4: ");
    scanf("%s", s2);
    getchar();

    t = my_strcmp(s1, s2);

    if (t == 0) {
        printf("%s and %s are equal\n", s1, s2);
    } else {
        printf("%s is greater than %s\n", s1, s2);
    }


    //part2 Q2
    int n;
    char str1[MAX], str2[MAX];

    printf("Enter number to compare: ");
    scanf("%d", &n);

    printf("Enter string1: ");
    scanf("%s", str1);
    getchar();

    printf("Enter string2: ");
    scanf("%s", str2);
    getchar();

    int t =  my_strncmp(str1, str2, n);

    if(t == 0) {
        printf("The two strings are equal for the first n characters.\n");
    } else {
        printf("The two strings are not equal for the first n characters.\n");
    }

    printf("Enter number to compare: ");
    scanf("%d", &n);

    printf("Enter string3: ");
    scanf("%s", str1);
    getchar();

    printf("Enter string4: ");
    scanf("%s", str2);
    getchar();

    t =  my_strncmp(str1, str2, n);

    if(t == 0) {
        printf("The two strings are equal for the first n characters.\n");
    } else {
        printf("The two strings are not equal for the first n characters.\n");
    }


    //Part2 Q3
    char src[MAX], dest[MAX];

    printf("Enter string1: ");
    scanf("%s", src);
    getchar();

    printf("My copy: %s", my_strcpy(dest, src));

    printf("Enter string2: ");
    scanf("%s", src);
    getchar();

    printf("My copy: %s", my_strcpy(dest, src));


    //part2 Q4
    printf("Enter string1: ");
    scanf("%s", str1);
    getchar();

    printf("Enter string2: ");
    scanf("%s", str2);
    getchar();

    printf("My strcat: %s\n", my_strcat(str1, str2));

    printf("Enter string3: ");
    scanf("%s", str1);
    getchar();

    printf("Enter string4: ");
    scanf("%s", str2);
    getchar();

    printf("My strcat: %s\n", my_strcat(str1, str2));


    //part2 Q5
    printf("Enter string to reverse: ");
    scanf("%s", str2);
    getchar();

    printf("My reverse: %s\n", my_reverse(str1, str2));

    printf("Enter string to reverse: ");
    scanf("%s", str2);
    getchar();

    printf("My reverse: %s\n", my_reverse(str1, str2));

    return 0;
}
