// Yanming Yu
// Project Array - Creating and Sorting Arrays 
// September 29th
// October 3rd
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

#define lower 12
#define upper 20
#define eleLower 10
#define eleUpper 90
#define ARRAYSIZE aS

void RandomizeList(int array[], int aS);

void PrintArray(int array[], int aS);

void FindMaxMin(int array[], int aS);

void FindAvg(int array[], int aS);

void SortArrayBubble( int array[], int aS);

void FindMedian(int array[], int aS);

int main () 
{
    srand(time(0)); // Use current time as // seed for random generator 
    //int i, lower = 12, upper = 20, size = 20, eleLower = 10, eleUpper = 90;
    int aS = (rand() % (upper - lower + 1)) + lower; /* Declaring max and min value of random, how many random numbers */
    int array[aS]; /* array is an array of random integers assigned by aS */

    printf("Yanming Yu - Project 3\n\nArray Size = %d \n\n", aS); 
 
    /* initialize elements of array n to 0 */  

    RandomizeList( array, aS);

    /* output each array element's value */

    PrintArray( array, aS);

    printf("\n");

    //Finds the maximum and minium values in array elements

    FindMaxMin( array, aS);

    //Finds the average value of the array elements

    FindAvg( array, aS);

    //Sorts the Array values

    SortArrayBubble( array, aS);

    //Finding the Median

    FindMedian( array, aS);

    printf("\n\n");

}

void RandomizeList(int array[], int aS)
{
    int i; //eleUpper = 90, eleLower = 10;
    for ( i = 0; i < aS; i++ ) 
   {
      array[i] = (rand() % (eleUpper - eleLower + 1)) + eleLower; /* set element at location i to random number between 10-90 */
   }
}

void PrintArray(int array[], int aS)
{
    int i;
    for (i = 0; i < aS; i++ ) 
        {
            printf("%d  ", array[i]);
        } 
        printf("\n");
} 

void FindMaxMin(int array[], int aS)
{
    int max, min, i;
    max = array[0];min = array[0];

    for (i = 0; i < aS; i++)
    {
        if( array[i]>max )
        {
            max = array[i];
        }
        if( array[i]<min)
        {
            min = array[i];
        }

    }
    printf("Maxium: %d     Minimum: %d\n\n", max, min);
}

void FindAvg(int array[], int aS)
{
    int i;
    // Average and sum variable
    int average, sum = 0;
    for (i = 0; i < aS; i++) 
    {
        sum += array[i];
        //printf("Size[%d]: %d\n", a, sum);
    }

    average = sum / aS;

    printf("Average: %d\n\n", average);
}

void SortArrayBubble( int array[], int aS)
{
    int j, a, b, i;
    for (i = 0; i < aS; ++i) 
        {
            PrintArray( array, aS);

            for (j = i + 1; j < aS; j++)
            {
                
                if (array[i] > array[j]) 
                {
 
                    a =  array[i];
                    array[i] = array[j];
                    array[j] = a;
 
                }
                
            }
 
        } 
    printf("\n");

    printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < aS; ++i)
            printf("%d  ", array[i]);

    printf("\n\n");
}

void FindMedian(int array[], int aS)
{
    int m;
    int median;
    if (aS % 2 == 0)
    {
        m = aS/2 ;
        median = (array[m] + array[m-1])/2;
    }
    else
    {
        m = aS/2;
        median = array[m];
    }

    printf("Median: %d\n\n", median);
}