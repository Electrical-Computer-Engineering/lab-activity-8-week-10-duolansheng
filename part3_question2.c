//116454458 Duolan Sheng

#include "stdio.h"
#include "string.h"

char s3[100];
char *modify_first_string(char s1[], char s2[]) {
    int writeIndex = 0;

    for(int i = 0; i < strlen(s1); i++) {
        int flag = 0;
        for(int j = 0; j < strlen(s2); j++) {
            if(s1[i] == s2[j]) {
                flag = 1;
                break;
            }
        }

        if(flag == 0) {
            s3[writeIndex] = s1[i];
            writeIndex++;
        }
    }

    s3[writeIndex] = '\0';
    return s3;
}

int main() {
    char s1[32], s2[32];

    printf("Enter string1: ");
    scanf("%s", s1);
    getchar();

    printf("Enter string2: ");
    scanf("%s", s2);
    getchar();

    char *res = modify_first_string(s1,s2);
    printf("String s1 after removing matching characters: %s\n", res);

    return 0;
}