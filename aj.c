#include <stdio.h>

int main() {
    int N, i;
    int totalAmount = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        int amount;
        scanf("%d", &amount);
        totalAmount += amount;
    }

    printf("%d\n", totalAmount);

    return 0;
}
