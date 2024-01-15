
#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    int sum = 0;
    for (int i = 0; i < T; i++) {
        int num;
        scanf("%d", &num);
        sum += num;
    }

    printf("%d\n", sum);

    return 0;
}