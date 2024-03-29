#include <stdio.h>
int playerpos1(){
    printf("\033[0;31m");
    printf(" p1 ");
    printf("\033[0m"); 
}
int playerpos2(){
    printf("\033[0;32m");
    printf(" p2 ");
    printf("\033[0m"); 
}
int check_snake(int i,int arr[6][2]){
    int length = 6;
    // printf("1st %d",length);
    for(int a1 = 0;length>a1;a1++)
    {
        int length1 = 2;
            // printf("2nd %d\n",length1);

            for(int a2 = 0; length1>a2; a2++)
            {
                if(arr[a1][a2] == i) 
                {
                    return a1+1;
                }
            }
    }
    return 0;
}
void display(int place1,int place2,int snakes[6][2]){
    int count = 0;
    int i = 100;
    while(i>0){
            //printf("ll");
            if(i == 100){
                    printf(" %d",i);
                    i--;
                    continue;
                }
            if(i%10 == 0)
            {
                count++;
                
            }
            if(count % 2 !=0){

                //i = i-10;
                printf("\n");
                int j = i-9;
                // printf("%d\n",j);
                for (j = i-9;j<=i;j++){
                    if(check_snake(j,snakes))   
                    {
                        printf("\033[0;33m");   
                        printf(" S%d ",check_snake(j,snakes));
                        printf("\033[0m"); 
                        continue;
                    } 
                    if (j == place1)
                    {
                        playerpos1(j);
                        continue;
                    }
                    if (j == place2)
                    {
                        playerpos2(j);
                        continue;
                    }
                    printf(" %d ",j);
                    if(count==9) printf(" ");
                    }
                    printf("\n");
                    i= i-10; 
                    
                    continue;
                }
            if(check_snake(i,snakes))   
            {
                printf("\033[0;33m");   
                printf(" S%d ",check_snake(i,snakes));
                printf("\033[0m"); 

            } 
            else if (i == place1)
            {
                playerpos1(i);
                
            }
            else if (i == place2)
            {
                playerpos2(i);
                
            }
            else {
                printf(" %d ",i);}
    i--;

    }}