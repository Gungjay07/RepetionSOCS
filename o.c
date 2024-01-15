#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);

        int max = 0;
        for (int i = 0; i < N; i++) {
            int X;
            scanf("%d", &X);

            if (X <= M && X > max) {
                max = X;
            }

        }
            if (max > K)
            {
                printf("Case #%d: %d\n", t, max);
            }
            else  printf("Case #%d: %d\n", t, K);
    }

    return 0;
}
