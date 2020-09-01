/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Contain implemnetation of all the function including the main>
 *
 * <Contain the function implementation of statistics main() - The main entry point for your program
 *  print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *  print_array() - Given an array of data and a length, prints the array to the screen
 *  find_median() - Given an array of data and a length, returns the median value
 *  find_mean() - Given an array of data and a length, returns the mean
 *  find_maximum() - Given an array of data and a length, returns the maximum
 *  find_minimum() - Given an array of data and a length, returns the minimum
 *  sort_array() - Given an array of data and a length, sorts the array from largest to smallest.>
 *
 * @author <Kavya Jain>
 * @date <08/31/2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int size_used = SIZE;
	
  /* Statistics and Printing Functions Go Here */
  printf("\n");
  print_array(test, SIZE);
  sort_array(test, SIZE);
  print_array(test,SIZE);
  print_statistics(test, SIZE);
  printf("\n");

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char arr[], int s)
{
	float mean = 0,median = 0;
	int maximum = 0, minimum = 0;
	mean = find_mean(arr, s);
	median = find_median(arr, s);
	maximum = find_maximum(arr, s);
	minimum = find_minimum(arr, s);
	printf("\nThe Statistics of the arrays are\n");
	printf("Mean : %f \nMedian : %f \nMaximum : %d\nMinimum : %d", mean,median,maximum,minimum);
}

void print_array(unsigned char *arr, int s)
{
	int i =0;
	printf("\n");
	for(i = 0;i<s;i++)
		printf("%d ", arr[i]);
	printf("\n");
}

float find_mean(unsigned char arr[], int s)
{
	float mean = 0;
	int i =0;
	for(i = 0;i<s;i++)
		mean += arr[i];
	mean /=s;
	return mean;
}

float find_median(unsigned char arr[], int s)
{
	float median = 0;
	if(s%2 == 0)
		median = (float)(arr[s/2-1]+arr[s/2])/2;
	else
		median = arr[s/2];
	return median;
}
int find_maximum(unsigned char arr[], int s)
{
	int i =0, maximum = 0; 
	for(i = 0; i< s; i++)
		if(arr[i]>maximum)
			maximum = arr[i];
	return maximum;
}
int find_minimum(unsigned char arr[], int s)
{
	int i =0, minimum = arr[0]; 
	for(i = 1; i< s; i++)
		if(arr[i]<minimum)
			minimum = arr[i];
	return minimum;
}

void sort_array(unsigned char *arr, int s)
{
	int i =0, j=0, temp =0;
	for (i = 0; i < s; ++i)
        {
            for (j = i + 1; j < s; ++j)
            {
                if (arr[i] < arr[j])
                {
                    temp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
	    }
        }
}

