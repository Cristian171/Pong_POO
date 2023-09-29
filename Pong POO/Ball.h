typedef struct
{
    float x;
    float y;
    float width;
    float height;
    float vel_x;
    float vel_y;

} Ball;

void Ball_init(Ball* ball, float initial_x, float initial_y, float initial_speed);