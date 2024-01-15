#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N, M; 
        scanf("%d %d", &N, &M);

        printf("Case #%d:\n", i);

        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= M; k++) {
                if (j == 1 || j == N || k == 1 || k == M) {
                    printf("#");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
