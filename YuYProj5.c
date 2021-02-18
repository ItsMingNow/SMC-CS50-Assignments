// Yanming Yu
// Project Struct
// October 20th
// October 24rd
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef struct
{
    int quiz;
    int quiz2;
    int midterm;
    int final;
    float average;
    char grade;
    int record;
} StudentRecord;

void getScore();
void computeGrade();
void output();

int main()
{
    int c, i;
    printf("How many students do you need to grade?");
    scanf("%d", &c);
    StudentRecord x;
    for (i = 0; i < c; i++)
    {
        x.record = i + 1;
        getScore(&x);
        computeGrade(&x);
        output(&x);
    }
}

void getScore(StudentRecord *y)
{
    printf("Enter two 10 point quiz scores\n");
    scanf("%d %d", &y->quiz, &y->quiz2);
    printf("\n");

    printf("Enter Midterm and Final scores\n");
    scanf("%d %d", &y->midterm, &y->final);
    printf("\n");

    //printf("In Function Quiz 1:%d Quiz 2:%d\n", y->quiz, y->quiz2);
}

void computeGrade(StudentRecord *y) //use this to calculate the numeric average and letter grade.
{
    y->average = (((y->quiz + y->quiz2) / 20.0) * 25 + ((y->midterm) / 100.0) * 25 + ((y->final) / 100.0) * 50);
    //printf("In function Your Average is %.2f\n", y->average);

    if (y->average > 89)
    {
        y->grade = 'A';
    }
    else if (y->average > 79)
    {
        y->grade = 'B';
    }
    else if (y->average > 69)
    {
        y->grade = 'C';
    }
    else if (y->average > 59)
    {
        y->grade = 'D';
    }
    else
    {
        y->grade = 'F';
    }
}

void output(StudentRecord *y) //outputs the student record.
{
    printf("The record for student number:%d\n", y->record);
    printf("The quiz grades are %d and %d\n", y->quiz, y->quiz2);
    printf("The midterm score is %d and the final exam score is %d\n", y->midterm, y->final);
    printf("Your Average is %.2f\n", y->average);
    printf("Your Letter Grade is %c\n", y->grade);
    printf("\n\n");
}