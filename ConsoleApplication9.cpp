// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// crt_qsort.c
// arguments: every good boy deserves favor

/* This program reads the command-line
* parameters and uses qsort to sort them. It
* then displays the sorted arguments.
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int compare(const void* arg1, const void* arg2);

int main(int argc, char** argv)
{
    int i;
    double a[5];
    for (i = 0;i < 5;i++)
        scanf_s("%lf", &a[i]);
 
    /* Sort remaining args using Quicksort algorithm: */
    qsort((void*)a, 5, sizeof(double), compare);

    /* Output sorted list: */
    for (i = 0; i < 5; ++i)
        printf(" %g", a[i]);

    printf("\n");
}

int compare(const void* arg1, const void* arg2)
{
   const double* item1, * item2;

    item1 = (double *) arg1;
    item2 = (double*) arg2;

    if (*item1 > * item2)
        return 1;

    if (*item1 < * item2)
        return -1;
 
    return 0;
   
}