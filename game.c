#include <stdio.h>
#include <conio.h> // For getch() function

// Constants
const int BOARD_WIDTH = 10;
const int BOARD_HEIGHT = 10;
const char PLAYER_CHAR = 'P';
const char ENEMY_CHAR = 'E';

// Player and Enemy positions
int playerX = 0;
int playerY = 0;
int enemyX = 5;
int enemyY = 5;

void drawBoard() {
    system("cls"); 
    for (int y = 0; y < BOARD_HEIGHT; y++) {
        for (int x = 0; x < BOARD_WIDTH; x++) {
            if (x == playerX && y == playerY) {
                printf("%c", PLAYER_CHAR);
            } else if (x == enemyX && y == enemyY) {
                printf("%c", ENEMY_CHAR);
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}

int main() {
    char move;
    int gameOver = 0;

    printf("Welcome to the Text-Based Game!\n");
    printf("Use 'W', 'A', 'S', 'D' to move. Try to avoid the enemy 'E'!\n");

    while (!gameOver) {
        drawBoard();
        move = getch(); // Get a character from the user

        // Update player position based on input
        switch (move) {
            case 'W':
            case 'w':
                if (playerY > 0) {
                    playerY--;
                }
                break;
            case 'A':
            case 'a':
                if (playerX > 0) {
                    playerX--;
                }
                break;
            case 'S':
            case 's':
                if (playerY < BOARD_HEIGHT - 1) {
                    playerY++;
                }
                break;
            case 'D':
            case 'd':
                if (playerX < BOARD_WIDTH - 1) {
                    playerX++;
                }
                break;
            default:
                break;
        }

        // Check for collision
        if (playerX == enemyX && playerY == enemyY) {
            printf("Game Over! You touched the enemy 'E'!\n");
            gameOver = 1;
        }
    }

    printf("Thanks for playing!\n");

    return 0;
}
