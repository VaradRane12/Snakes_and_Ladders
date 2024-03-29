#include<stdio.h>
int playerpos(){
    
}
int main(){
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
        if(count == 9)
        {
            int j = i-9;
            printf("\n");
            // printf("%d\n",j);
            for (j = i-9;j<=i;j++){
            printf(" %d  ",j);
            
            }
            break;
        }
        if(count % 2 !=0){
            //i = i-10;
            printf("\n");
            int j = i-9;
            // printf("%d\n",j);
            for (j = i-9;j<=i;j++){
                if (playerpos(j))
                {
                    printf("pl1");
                    continue;
                }
                printf(" %d ",j);
                }
                printf("\n");
                i= i-10; 
                
                continue;
            }
            printf(" %d ",i);
i--;

    }}
