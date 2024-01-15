#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);
        long long int lowest = INT_MAX;
        long long int first, second;
        scanf("%lld", &first);

        for (int j = 1; j < N; j++) {
            scanf("%lld", &second);
            long long int diff = abs(second - first);
            
            if (diff < lowest) {
                lowest = diff;
            }
            first = second; 
        }
        printf("Case #%d: %lld\n", i, lowest);
    }

    return 0;
}
