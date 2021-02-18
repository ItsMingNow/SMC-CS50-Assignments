// Yanming Yu
// Parity bit
// November 5th
// November 7th
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <stdbool.h>

int main(void)
{
    printf("Yanming Yu - Project 6: Adding Parity Bit\n\n");

    srand(time(0));

    int disp[12][9];

    int i, j, k;

    /*Counter variables for the loop*/
   for(i=0; i<12; i++) 
   {
      for(j=0;j<9;j++) 
      {
        if(j==8)
         {
            int check;
            check = 0;
            for (k = 0; k<8; k++){
                check = check + disp[i][k];
            }
            disp[i][j] = check%2;
            //printf("check = %d\n", check);
         }
         else
         {
             {
                disp[i][j] = rand()%2; 
             }
         }
      }
   }
   //Displaying array elements
   for(i=0; i<12; i++) 
   {
      for(j=0;j<9;j++) 
      {
         printf("%d", disp[i][j]);
         if(j==7)
         {
            printf(" ");
         }
         if(j==8)
         {
            printf("\n");
         }
      }
   }
   printf("\n");
   printf("Yanming Yu - Project 6: End of Program\n\n");
}