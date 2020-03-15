/*
 ============================================================================
 Name        : random.c
 Author      : stephy baby
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 =======================================================================
  *
  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printRandoms(int lower, int upper,
                             int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        int num = (rand() %
           (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
}


int main()
{
    int lower = 1, upper = 200, count = 1;

    srand(time(0));

    printRandoms(lower, upper, count);

    return 0;
}

