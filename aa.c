#include <stdio.h>
int simulateGame(int N, int rolls[]) {
    int ladders[3][2] = {{9, 21}, {33, 42}, {76, 92}};
    int snakes[3][2] = {{53, 37}, {80, 59}, {97, 88}};
    int position = 0;
    for (int i = 0; i < N; i++) {
        int roll = rolls[i];
        position += roll;

        for (int j = 0; j < 3; j++) {
            if (position == ladders[j][0]) {
                position = ladders[j][1];
                break;
            }
            if (position == snakes[j][0]) {
                position = snakes[j][1];
                break;
            }
        }
    }
    return position;
}
int main() {
    int N;
    scanf("%d", &N);
    
    int rolls[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &rolls[i]);
    }

    int finalPosition = simulateGame(N, rolls);
    printf("%d\n", finalPosition);

    return 0;
}