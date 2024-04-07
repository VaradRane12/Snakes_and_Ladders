#include <stdio.h>
#include<time.h>
#include "display.c"
#include "randomizer.c"
#include "snake_ladder_check.c"
int p1 = 0, p2 = 0;
int move_P1(int p1, int p2,int snakes[6][2],int ladder[6][2],char chr[]){
    int dice = random();
    printf("\nThe Current Board, %s is to Move\n",chr);
    display(p1,p2,snakes,ladder);
    printf("\nPress Any key to draw for %s\n",chr);
    getchar();
    printf("You've pulled a :%d",dice);
    printf("\n");
    p1 = p1 + dice;
    //perhaps add a if condition to tell you've fallen
    if(snake_condition(p1,snakes,ladder))
    {
        p1 = snake_condition(p1,snakes,ladder);    
        return p1;
    }
    if(ladder_condition(p1,snakes,ladder))
    {
        p1 = ladder_condition(p1,snakes,ladder);    
        return p1;
    }
    
    return p1;
}
int move_P2(int p1, int p2,int snakes[6][2],int ladder[6][2],char chr[]){
    int dice = random();
    printf("\nThe Current Board, %s is to Move\n",chr);
    display(p1,p2,snakes,ladder);
     printf("\nPress Any key to draw for %s\n",chr);
    getchar();
    printf("You've pulled a :%d",dice);
    printf("\n");
    p2 = p2 + dice;

    //perhaps add a if condition to tell you've fallen
    if(snake_condition(p2,snakes,ladder))
    {
        p2 = snake_condition(p2,snakes,ladder);    
        return p2;
    }
    if(ladder_condition(p2,snakes,ladder))
    {
        p2 = ladder_condition(p2,snakes,ladder);    
        return p2;
    }
    
    return p2;
}
int main(){
    int snakes[6][2] = {{36,6},{48, 26},{62,18},{88,24},{95,56},{99,78}};
    int ladder[6][2] = {{4,40},{7, 15},{27,54},{30,77},{71,92},{89,98}};
    //display(0,0,snakes,ladder); 
    int p1 = 0;
    int p2 = 0;
    char chr[10];
    char chr1[10];
    printf("Enter name for Player 1: ");
    scanf("%s",&chr);
    printf("\nEnter name for Player 2: ");
    scanf("%s",&chr1);
    while(p1<100)
    {
    p1  = move_P1(p1,p2,snakes,ladder,chr);
    display(p1,p2,snakes,ladder);
    if(p1>=100)
    {
        printf("Congratulations %s Has WON!!!!!!!!",chr);
        break;
    }
    // printf("\n\n\n\n\n\n\n\n");
    p2  = move_P2(p1,p2,snakes,ladder,chr1);
    display(p1,p2,snakes,ladder);
     if(p2>=100)
    {
        printf("Congratulations %s Has WON!!!!!!!!",chr1);
        break;
    }
    // printf("\n\n\n\n\n\n\n\n");
    }
    

}