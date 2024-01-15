#include <SDL.h>
#include <stdbool.h>

// Constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int PLAYER_SPEED = 5;

// Player and NPC positions
int playerX = 50;
int playerY = 50;
int mummyX = 300;
int mummyY = 200;

// SDL variables
SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

// Function to initialize SDL
bool initSDL() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    window = SDL_CreateWindow("Librarian Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    return true;
}

// Function to handle input events
void handleInput(SDL_Event event) {
    if (event.type == SDL_KEYDOWN) {
        switch (event.key.keysym.sym) {
            case SDLK_UP:
                playerY -= PLAYER_SPEED;
                break;
            case SDLK_DOWN:
                playerY += PLAYER_SPEED;
                break;
            case SDLK_LEFT:
                playerX -= PLAYER_SPEED;
                break;
            case SDLK_RIGHT:
                playerX += PLAYER_SPEED;
                break;
        }
    }
}

// Function to check collision
bool checkCollision() {
    int playerCenterX = playerX + 25;
    int playerCenterY = playerY + 25;
    int mummyCenterX = mummyX + 25;
    int mummyCenterY = mummyY + 25;

    int distance = sqrt(pow(playerCenterX - mummyCenterX, 2) + pow(playerCenterY - mummyCenterY, 2));

    return distance < 50; // You can adjust the collision radius as needed
}

// Main game loop
void gameLoop() {
    bool quit = false;
    SDL_Event e;

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
            handleInput(e);
        }

        // Check for collision
        if (checkCollision()) {
            printf("Game Over! You touched the mummy!\n");
            quit = true;
        }

        // Clear the screen
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        // Draw the player and mummy
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Red for player
        SDL_Rect playerRect = {playerX, playerY, 50, 50};
        SDL_RenderFillRect(renderer, &playerRect);

        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255); // Blue for mummy
        SDL_Rect mummyRect = {mummyX, mummyY, 50, 50};
        SDL_RenderFillRect(renderer, &mummyRect);

        // Update the screen
        SDL_RenderPresent(renderer);
    }
}

// Cleanup and exit
void closeSDL() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

int main(int argc, char* args[]) {
    if (!initSDL()) {
        return 1;
    }

    gameLoop();

    closeSDL();

    return 0;
}
