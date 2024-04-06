#include "randomizer.c"
#include "display.c"
#include "snake_ladder_check.c"
int p1 = 0, p2 = 0;
int move_P1(int p1, int p2,int snakes[6][2],int ladder[6][2]){
    int dice = random();
    display(p1,p2,snakes,ladder);
    printf("\n Press Any key to draw for player 1");

    printf("You've pulled a %d:",dice);
    p1 = p1 + dice;


    //perhaps add a if condition to tell you've fallen
    if(snake_condition(p1,snakes,ladder))
    {
        p1 = snake_condition(p1,snakes,ladder);
        printf("%d",p1);
    }
    

}