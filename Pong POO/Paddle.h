typedef struct
{
    float x;
    float y;
    float width;
    float height;
    float vel_x;
    float vel_y;

} Paddle;

void Paddle_init(Paddle* paddle, float initial_x, float initial_y);