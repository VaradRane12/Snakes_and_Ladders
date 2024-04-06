#include <stdio.h>
int playerpos1(){
    printf("\033[0;31m");
    printf(" p1 ");     //red color for p1
    printf("\033[0m"); 
}
int playerpos2(){
    printf("\033[0;32m");       //green color for p2
    printf(" p2 ");
    printf("\033[0m"); 
}
int check_snake(int i,int arr[6][2]){
    int length = 6;     //lenght of the 1st dimension of the 2d array
    // printf("1st %d",length);
    for(int a1 = 0;length>a1;a1++)      //iterating through first part of the snakes array
    {
        int length1 = 2;    //lenght of the 2nd dimension of hte 2d array
            // printf("2nd %d\n",length1);

            for(int a2 = 0; length1>a2; a2++)
            {
                if(arr[a1][a2] == i)        //checking for if the array consists of the number 
                {
                    return a1+1;        //returning hte number +1 to look good
                }
            }
    }
    return 0;
}

int check_ladder(int i,int arr[6][2]){
    int length = 6;     //lenght of the 1st dimension of the 2d array
    // printf("1st %d",length);
    for(int a1 = 0;length>a1;a1++)      //iterating through first part of the snakes array
    {
        int length1 = 2;    //lenght of the 2nd dimension of hte 2d array
            // printf("2nd %d\n",length1);

            for(int a2 = 0; length1>a2; a2++)
            {
                if(arr[a1][a2] == i)        //checking for if the array consists of the number 
                {
                    return a1+1;        //returning hte number +1 to look good
                }
            }
    }
    return 0;
}
void display(int place1,int place2,int snakes[6][2],int ladder[6][2]){
    int count = 0;
    int i = 100;
    while(i>0){     //Outer loop to print the the even count of iteration of the 10digits
            //printf("ll");
            if(i == 100){
                    printf(" %d",i);
                    i--;
                    continue;
                }       // if statement for if i in 100 


            if(i%10 == 0)
            {
                count++;
                
            }       //incrementing count every 10th iteration

            
            if(count % 2 !=0){

                //i = i-10;
                printf("\n");       //newline to go to the next line
                int j = i-9;        //decalring j to -9 of i to get the increasing order of odd count
                // printf("%d\n",j);
                for (j = i-9;j<=i;j++){     //inner for loop to print every odd count of 10 decimals
                   
                    if (j == place1)        //checking for wehre player 1 is 
                    {
                        playerpos1(j);
                        continue;
                    }
                    
                    else if (j == place2)        //checking for wehre player 2 is 
                    {
                        playerpos2(j);
                        continue;
                    }
                    else if(check_snake(j,snakes))   //checks if a snake exists in the specfic j
                    {
                        printf("\033[0;33m");   //yellow color
                        printf(" S%d ",check_snake(j,snakes));  //printing snake number
                        printf("\033[0m"); 
                        continue;
                    } 

                    else if(check_ladder(j,ladder))   //checking if a ladder exists 
                    {
                        printf("\e[0;35m");   
                        printf(" L%d ",check_ladder(j,ladder));
                        printf("\033[0m"); 
                        continue;    

                    } 


                    


                    printf(" %d ",j);


                    if(count==9) printf(" ");       //printing an aditional space for the last row as its single digit
                    }
                    printf("\n");
                    i= i-10; 
                    
                    continue;
                }
            if (i == place1)       //checking if i is player 1
            {
                playerpos1(i);
                
            }


            else if (i == place2)       //checking if i is player 2
            {
                playerpos2(i);
                
            }
            else if(check_snake(i,snakes))   //checking if a snake exists 
            {
                printf("\033[0;33m");   
                printf(" S%d ",check_snake(i,snakes));
                printf("\033[0m"); 

            } 


            else if (check_ladder(i,ladder))   //checking if a ladder exists 
            {
                printf("\e[0;35m");   
                printf(" L%d ",check_ladder(i,ladder));
                printf("\033[0m"); 

            } 
            else {
                printf(" %d ",i);}      // else printing the outer series
    i--;

    }}