#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N, M;
        scanf("%d %d", &N, &M);

        int menu[N];

        for (int j = 0; j < N; j++) {
            scanf("%d", &menu[j]);
        }

        int totalCost = 0;
        for (int j = 0; j < N; j++) {
            totalCost += menu[j];
        }

        printf("Case #%d: ", i);
        if (totalCost > M) {
            printf("Wash dishes\n");
        } else {
            printf("No worries\n");
        }
    }

    return 0;
}
