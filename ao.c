#include <stdio.h>
#include <ctype.h>

void remove_non_alphabets(char *str) {
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[len++] = str[i];
        }
    }

    str[len] = '\0';
}

int main() {
    int T;
    scanf("%d", &T);

    for (int case_number = 1; case_number <= T; case_number++) {
        int N;
        scanf("%d", &N);

        char S[101]; 
        scanf(" %[^\n]s", S); 

        remove_non_alphabets(S);

        printf("Case #%d: %s\n", case_number, S);
    }

    return 0;
}