#include "randomizer.c"
#include "display.c"
#include "snake_ladder_check.c"
int snakes[6][2] = {{36,6},{48, 26},{62,18},{88,24},{95,56},{99,78}};
int ladder[6][2] = {{4,40},{7, 15},{27,54},{30,77},{71,92},{89,98}};
int p1 = 0, p2 = 0;
int move_P1(int p1, int p2){
    display(p1,p2,snakes,ladder);
    p1 = p1 + random();
    snake_condition(p1)
}