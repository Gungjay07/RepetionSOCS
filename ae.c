#include <stdio.h>

#define PI 3.14

int main() {
    int T;
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int R, H;
        scanf("%d %d", &R, &H);

        double surfaceArea = 2 * PI * R * R + 2 * PI * R * H;

        printf("Case #%d: %.2lf\n", caseNum, surfaceArea);
    }

    return 0;
}
