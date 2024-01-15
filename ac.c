#include <stdio.h>

int maxCandies(int N, int M, int prices[]) {
    int maxCandy = 0;

    for (int i = 0; i < N; i++) {
        int candies = M / prices[i];
        if (candies > maxCandy) {
            maxCandy = candies;
        }
    }

    return maxCandy;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N, M;
        scanf("%d %d", &N, &M);

        int prices[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &prices[i]);
        }

        int maxCandy = maxCandies(N, M, prices);

        printf("Case #%d: %d\n", caseNum, maxCandy);
    }

    return 0;
}
