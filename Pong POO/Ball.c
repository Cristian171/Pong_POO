#include "Ball.h"

void Ball_init(Ball* ball, float initial_x, float initial_y, float initial_speed){
    ball->x = initial_x;
    ball->y = initial_y;
    ball->width = 15;
    ball->height = 15;
    ball->vel_x = initial_speed;
    ball->vel_y = initial_speed;
}
