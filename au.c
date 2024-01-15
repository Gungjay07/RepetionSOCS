#include <stdio.h>

void generateWord(int N) {
    char currentLetter = 'a';
    
    for (int i = 0; i < N; i++) {
        printf("%c", currentLetter);
        currentLetter++;
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N;
        scanf("%d", &N);

        printf("Case #%d: ", caseNum);
        generateWord(N);
    }

    return 0;
}
