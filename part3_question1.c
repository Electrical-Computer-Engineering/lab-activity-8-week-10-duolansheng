//116454458 Duolan Sheng

#include "stdio.h"
#include "string.h"

void shift_first(char *str) {
    int str_length = 0;

    while(str[str_length] != '\0') {
        str_length++;
    }

    for(int i = 0; i < str_length; i++){
        str[i] = str[i + 1];
    }

    str[str_length - 1] = '\0';
}

int main() {
    char str[11];

    printf("Enter a string: ");
    scanf("%s", str);

    while(strlen(str) >= 1){
        printf("%s\n", str);
        shift_first(str);
    }

    return 0;
}