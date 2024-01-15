#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        char S[N + 1];
        scanf("%s", S);

        int LiliWins = 0, BibiWins = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == 'L') {
                LiliWins++;
            } else if (S[i] == 'B') {
                BibiWins++;
            }
        }

        if (LiliWins > BibiWins) {
            printf("Lili\n");
        } else if (BibiWins > LiliWins) {
            printf("Bibi\n");
        } else {
            printf("None\n");
        }
    }

    return 0;
}
