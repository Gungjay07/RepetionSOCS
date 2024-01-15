#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N, A, B, C, D;
        scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);

        int disposedToys = 0;

        for (int i = 1; i <= N; i++) {
            if (i % A == 0 || i % B == 0 || i % C == 0 || i % D == 0) {
                disposedToys++;
            }
        }

        printf("Case #%d: %d\n", caseNum, disposedToys);
    }

    return 0;
}
