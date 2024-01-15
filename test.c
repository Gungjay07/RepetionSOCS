#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;

    for (int j = 0; j <= N; j++)
        for (int l = 0; l <= N; l++)
            for (int b = 0; b <= N; b++)
                if (j + l + b == N)
                    count++;

    printf("%d\n", count);

    return 0;
}
