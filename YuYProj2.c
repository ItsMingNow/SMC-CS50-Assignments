// Yanming Yu
// CS 50
// Project 2: Printing Diamond 
// 9/19/20

//#include <stdafx.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define UPPER_LIMIT
#define LOWER_LIMIT

void printArray(int array[],int aS);


int main(void)
{
    int upper = 20, lower = 12;
    int eleUpper = 90, eleLower = 10;
    int i;

    srand(time(0)); // Use current time as // seed for random generator

    int aS = (rand() % (upper - lower + 1)) + lower; /* Declaring max and min value of random, how many random numbers*/

    int array[aS]; /* array is an array of random integers assigned by aS */ 

    printf("aS: %d \n\narray: %d \n\n", aS, array[0]);

    printf("Yanming Yu - Project 3\n\nArray Size = %d \n\n", aS);
 
    /* initialize elements of array i to 0 */         
    for ( i = 0; i < aS; i++ ) 
    {
        array[ i ] = (rand() % (eleUpper - eleLower + 1)) + eleLower; /* set element at location i to random number between 10-90 */
    }
   
    /* output each array element's value */
    //printf("Array Elements Before Function:\n");
    printArray( array, aS);

}

void printArray(int array[],int aS)
{
    int i;
    for (i = 0; i < aS; i++ ) 
        {
            printf("%d  ", array[i]);
        } 
    printf("\n\n");
}
