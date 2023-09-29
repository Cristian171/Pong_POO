#include <stdbool.h>
#include "Ball.c"
#include "Game.h"
#include "Paddle.h"
#include "constants.h"

void Game_init(Game* game) 
{
    game->is_running = false;
    game->score = 0;
    game->last_frame_time = 0;
    Ball_init(&game->ball, 20, 20, 250.0);
    Paddle_init(&game->paddle, (WINDOW_WIDTH / 2) - (game->paddle.width / 2), WINDOW_HEIGHT - 40);
}

void Game_initialize_window(Game* game) 
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) 
    {
        fprintf(stderr, "Error initializing SDL.\n");
        game->is_running = false;
        return;
    }

    game->window = SDL_CreateWindow(
        NULL,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH,
        WINDOW_HEIGHT,
        SDL_WINDOW_BORDERLESS
    );

    if (!game->window) 
    {
        fprintf(stderr, "Error creating SDL Window.\n");
        game->is_running = false;
        return;
    }

    game->renderer = SDL_CreateRenderer(game->window, -1, 0);

    if (!game->renderer)
    {
        fprintf(stderr, "Error creating SDL Renderer.\n");
        game->is_running = false;
        return;
    }

    if (TTF_Init() != 0) 
    {
        fprintf(stderr, "Error initializing SDL_ttf");
        game->is_running = false;
        return;
    }

    game->is_running = true;
}
