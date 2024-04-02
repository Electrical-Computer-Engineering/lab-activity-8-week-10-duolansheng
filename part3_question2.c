//116454458 Duolan Sheng

#include "stdio.h"
#include "string.h"
char *modify_first_string(char s1[], char s2[]) {
    int writeIndex = 0;
    int read = 0;

    for(int i = 0; i < strlen(s1); i++) {
        for(int j = 0; j < strlen(s2); j++) {
            if(s1[i] == s2[j]) {
                break;
            } else {
                s1[writeIndex] = s1[i];
                writeIndex++;
            }
        }

        s1[writeIndex] = '\0';
        return s1;
    }
}

int main() {
    char s1[32], s2[32];

    printf("Enter string1: ");
    scanf("%s", s1);
    getchar();

    printf("Enter string2: ");
    scanf("%s", s2);
    getchar();

    modify_first_string(s1,s2);
    printf("String s1 after removing matching characters: %s\n", s1);

    return 0;
}
