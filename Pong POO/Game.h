typedef struct
{
    bool is_running;
    int score;
    Ball ball;
    Paddle paddle;
    SDL_Window* window;
    SDL_Renderer* renderer;
    TTF_Font* font;
    SDL_Texture* text_texture;
    int last_frame_time;
} Game;

void Game_init(Game* game);
void Game_initialize_window(Game* game);