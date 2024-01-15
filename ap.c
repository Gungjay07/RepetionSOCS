#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, K;
        scanf("%d %d", &N, &K);

        char S[101]; 
        scanf("%s", S);

        printf("Case #%d: ", t);

        for (int i = 0; i < N; i++) {
            char c = S[i];
            int num = c - 'a'; 

            num = (num + K) % 26; 

            char encrypted_char = num + 'a'; 
            printf("%c", encrypted_char);
        }

        printf("\n");
    }

    return 0;
}