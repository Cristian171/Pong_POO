#include <stdio.h>
#include <stdbool.h>
#include "Game.h"
#include "paddle.h"
#include "Ball.h"
#include <SDL.h>
#include "constants.h"
#include <SDL_ttf.h>

int main(int argc, char* args[]) 
{
    Game game;
    Game_init(&game);
    Game_initialize_window(&game);

    // Resto del bucle principal utilizando métodos de las clases

    while (game.is_running) {
        process_input(&game);
        update(&game);
        render(&game);
    }

    save_event_history(event_list_head, "save.txt");
    destroy_window(&game);

    return 0;
}