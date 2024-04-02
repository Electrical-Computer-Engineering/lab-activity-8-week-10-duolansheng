//116454458 Duolan Sheng

#include "stdio.h"
#include "string.h"

void shift_first(char *str) {
    int length = strlen(str);

    while(length > 0) {
        int i = length;
        str[i] = str[i + 1];
        i--;
        length--;
    }
}

int main() {
    char str[11];

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; i < strlen(str); i++) {
        shift_first(str);
        printf("%s\n", str);
    }
    return 0;
}
