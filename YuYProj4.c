// Yanming Yu
// Project Craps
// October 13th
// October 17rd
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <stdbool.h>

#define lower 1
#define upper 6

int RollTwoDice();

int main () 
{
srand(time(0));

printf("Yanming Yu - Project 4: Craps\n\n");

int sum = RollTwoDice();

if (sum == 7 || sum == 11)
{
    printf("Congratulations! Player wins!\n");
    printf("Yanming Yu - Project 4 End\n\n");
    return 0;   
}
else if (sum == 2 || sum == 3 || sum == 12)
{
    printf("Sorry! House wins!\n");
    printf("Yanming Yu - Project 4 End\n\n");
    return 1;   
}
else
{
    int points = sum;

    printf("\nPoint is %d, The game continues:\n\n", points);

    while (true)
    {
        sum = RollTwoDice();
        if (sum == points)
        {
            printf("\nCongratulations! Player wins!\n\n");
            printf("Yanming Yu - Project 4 End\n\n");
            return 0;
        }
        else if (sum == 7)
        {
            printf("\nSorry! House wins!\n\n");
            printf("Yanming Yu - Project 4 End\n\n");
            return 1;
        }
        
    }
}





}

int RollTwoDice()
{
    int twoDice;
    int die_1 = (rand() % (upper - lower + 1)) + lower; /* Declaring max and min value of random, how many random numbers */
    int die_2 = (rand() % (upper - lower + 1)) + lower; /* Declaring max and min value of random, how many random numbers */

    twoDice = die_2 + die_1;
    printf("Player rolled %d + %d = %d\n",die_1, die_2, die_1 + die_2);
    return twoDice;
}