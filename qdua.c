#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, X;
        scanf("%d %d", &N, &X);

        int min = X - 1 < N - X ? X - 1 : N - X;

        printf("Case #%d: %d\n", t, min);
    }

    return 0;
}
