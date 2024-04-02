#include <stdio.h>
#include "display.c"
#include "randomizer.c"
int main(){
    int snakes[6][2] = {{36,6},{48, 26},{62,18},{88,24},{95,56},{99,78}};
    int ladder[6][2] = {{4,40},{7, 15},{27,54},{30,77},{71,92},{89,98}};
    display(50,80,snakes,ladder); 
    random();
}