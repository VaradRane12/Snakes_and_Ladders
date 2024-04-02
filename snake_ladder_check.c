int snakes[6][2] = {{36,6},{48, 26},{62,18},{88,24},{95,56},{99,78}};
int ladder[6][2] = {{4,40},{7, 15},{27,54},{30,77},{71,92},{89,98}};

int snake_condition(int p1)
{
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
}