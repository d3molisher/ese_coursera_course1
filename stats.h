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
 * @file <stats.h> 
 * @brief <Header file for function on stat.c>
 *
 * <This file contain all the function parametrs and function definitions>
 *
 * @author <Kavya Jain>
 * @date <08/31/2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief <Prints the statistics of an array including minimum, maximum, mean, and median.>
 *
 * <The function takes an arary and its size as its input. Its performs Mean, Median, Maximum
 *  and Minimum on the array by using helper functions. The paramters are passed by value, theereby
 *  not changing the actual value. It will print all the value on the screen, hence doesnt have a return type>
 *
 * @param <arr[]> <array on which opertaions are performed>
 * @param <s> <size of the array>
 *
 * @return <Doesnt return anything,  directly prints the value on the screen>
 */
 
void print_statistics(unsigned char arr[], int s);

/**
 * @brief <Prints the array to the screen>
 *
 * <The function takes an arary and its size as its input. Prints the array on the screeen
 *  It prints the value on the screen, hence doesnt have a return type>
 *
 * @param <*arr> <pointer to the array which is printed>
 * @param <s> <size of the array>
 *
 * @return <Doesnt return anything,  directly prints the value on the screen>
 */ 
 
 void print_array(unsigned char *arr, int s);

/**
 * @brief <Calculates the Mean of the array>
 *
 * <The function takes an arary and its size as its input. calculates the mean of the
 *  array nad return it as float value.>
 *
 * @param <arr[]> <array on which opertaions are performed>
 * @param <s> <size of the array>
 *
 * @return <Returns value of the Mean>
 */
 
 float find_mean(unsigned char arr[], int s);

/**
 * @brief <Calculates the Median of the array>
 *
 * <The function takes an arary and its size as its input. Calculates the median of the
 *  array nad return it as float value>
 *
 * @param <arr[]> <array on which opertaions are performed>
 * @param <s> <size of the array>
 *
 * @return <Returns value of the Median>
 */
 
 float find_median(unsigned char arr[], int s);

/**
 * @brief <Calculates the Maximum of the array>
 *
 * <The function takes an arary and its size as its input. Calculates the maximum element
 *  of the array and return it>
 *
 * @param <arr[]> <array on which opertaions are performed>
 * @param <s> <size of the array>
 *
 * @return <Returns Maximum element>
 */
 
 int find_maximum(unsigned char arr[], int s);

/**
 * @brief <Calculates the Minimum of the array>
 *
 * <The function takes an arary and its size as its input. Calculates the minimum element
 *  of the array and return it>
 *
 * @param <arr[]> <array on which opertaions are performed>
 * @param <s> <size of the array>
 *
 * @return <Returns Minimum element>
 */
 
 int find_minimum(unsigned char arr[], int s);

/**
 * @brief <Sort the array in descending order>
 *
 * <The function takes an pointer to the arary and its size as its input. Sorts the array 
 *  in descending order in the original array, parameters are passed via argument. Doesnt
 *  return anything.>
 *
 * @param <arr[]> <array on which opertaions are performed>
 * @param <s> <size of the array>
 *
 * @return <Doesnt return anything, changes the original array>
 */
 
 void sort_array(unsigned char *arr, int s);

#endif /* __STATS_H__ */
