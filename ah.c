#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        long long N;
        scanf("%lld", &N);

        int length = 0;
        long long temp = N;

        while (temp > 0) {
            temp /= 10;
            length++;
        }

        printf("Case #%d: %d\n", caseNum, length);
    }

    return 0;
}
