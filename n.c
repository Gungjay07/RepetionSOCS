#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int K;
        scanf("%d", &K);

        int jumps = 0;
        int distance = 0;

        while (distance < K) {
            jumps++;
            distance += jumps;
        }

        printf("Case #%d: %d\n", tc, jumps);
    }

    return 0;
}
