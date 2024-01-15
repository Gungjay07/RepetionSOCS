#include <stdio.h>

int main() {
    int Q;
    scanf("%d", &Q);

    int N = 1;

    for (int i = 0; i < Q; i++) {
        N = N * 2 + 1;
    }

    printf("%d\n", N);

    return 0;
}
