#include <stdio.h>
int calculateGifts(int scores[], int N) {
    int maxScore = scores[0];
    int giftCount = 1;

    for (int i = 1; i < N; i++) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            giftCount = 1;
        } else if (scores[i] == maxScore) {
            giftCount++;
        }
    }

    return giftCount;
}

int main() {
    int T; 
    scanf("%d", &T);
    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N; 
        scanf("%d", &N);
        int scores[N]; 
        for (int i = 0; i < N; i++) {
            scanf("%d", &scores[i]);
        }
        int giftsNeeded = calculateGifts(scores, N);
        printf("Case #%d: %d\n", caseNum, giftsNeeded);
    }

    return 0;
}
