#include <stdio.h>

int countBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        int A[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int atLeast3 = 0;
        int lessThan3 = 0;

        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int X = A[i] ^ A[j];
                int onBits = countBits(X);

                if (onBits >= 3) {
                    atLeast3++;
                } else {
                    lessThan3++;
                }
            }
        }

        printf("Case #%d: %d %d\n", t, atLeast3, lessThan3);
    }

    return 0;
}
