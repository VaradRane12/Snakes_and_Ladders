int snake_condition(int p1,int snakes[6][2],int ladder[6][2])
{
     int length = 6;     //lenght of the 1st dimension of the 2d array
    // printf("1st %d",length);
    for(int a1 = 0;length>a1;a1++)      //iterating through first part of the snakes array
    {
        int length1 = 2;    //lenght of the 2nd dimension of hte 2d array
            // printf("2nd %d\n",length1);

            for(int a2 = 0; length1>a2; a2++)
            {
                if(snakes[a1][0] == p1)        //checking for if the array consists of the number 
                {
                    return snakes[a1][1];      
                }
            }
    }
    return 0;
}

int ladder_condition(int p1,int snakes[6][2],int ladder[6][2])
{
     int length = 6;     //lenght of the 1st dimension of the 2d array
    // printf("1st %d",length);
    for(int a1 = 0;length>a1;a1++)      //iterating through first part of the snakes array
    {
        int length1 = 2;    //lenght of the 2nd dimension of hte 2d array
            // printf("2nd %d\n",length1);

            for(int a2 = 0; length1>a2; a2++)
            {
                if(ladder[a1][0] == p1)        //checking for if the array consists of the number 
                {
                    return ladder[a1][1];      
                }
            }
    }
    return 0;
}