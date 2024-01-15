#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int answered = 0;

    for (int i = 0; i < N; i++) {
        int tc, ts, tv;
        scanf("%d %d %d", &tc, &ts, &tv);

        if (ts > tv) {
            answered++;
        }
    }

    printf("%d\n", answered);

    return 0;
}
