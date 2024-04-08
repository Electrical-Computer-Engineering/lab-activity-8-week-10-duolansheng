//116454458 Duolan Sheng

#include "stdio.h"
#include "string.h"

#define MAX 32
char *ToPigLatin(char str[MAX]) {
    int capital = 0;
    if (str[0] >= 'A' && str[0] <= 'Z') {
        capital = 1;
        str[0] = str[0] - 'A' + 'a';
    }

    int i = 0;
    if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' ||
        str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U' ) {
        i = strlen(str);
        str[i] = 'w';
        str[i + 1] = 'a';
        str[i + 2] = 'y';
        str[i + 3] = '\0';
    } else {
        int vowel = 0;
        char consonants[MAX];
        for(int j = 0; j < strlen(str); j++) {
            if(j == 0 && str[0] == 'y' || str[0] == 'Y') {
                continue;
            }
            if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'y'||
                str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U' || str[j] == 'Y') {
                vowel = j;
                break;
            }
        }

        int p = 0;
        int k = 0;
        while (p < vowel) {
            consonants[k] = str[p];
            p++;
            k++;
        }
        consonants[k] = '\0';

        int m = 0;
        while (str[m + vowel] != '\0') {
            str[m] = str[m + vowel];
            m++;
        }

        k = 0;
        while(consonants[k] != '\0') {
            str[m] = consonants[k];
            m++;
            k++;
        }
        i = strlen(str);
        str[i] = 'a';
        str[i + 1] = 'y';
        str[i + 2] = '\0';
    }

    if(capital == 1) {
        str[0] = str[0] - 'a' + 'A';
    }

    return str;
}

int main() {
    char ch[5][32];

    printf("Input 5 words: ");
    for(int i = 0; i < 5; i++) {
        scanf("%s", ch[i]);
    }

    printf("Pig Latin version of the 5 words:\n%s\n%s\n%s\n%s\n%s", ToPigLatin(ch[0]), ToPigLatin(ch[1]), ToPigLatin(ch[2]),ToPigLatin(ch[3]),ToPigLatin(ch[4]));
}
