#include "Paddle.h"

void Paddle_init(Paddle* paddle, float initial_x, float initial_y) 
{
    paddle->x = initial_x;
    paddle->y = initial_y;
    paddle->width = 100;
    paddle->height = 20;
    paddle->vel_x = 0;
    paddle->vel_y = 0;
}