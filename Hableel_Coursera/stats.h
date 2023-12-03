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
 * @file stats.c
 * @brief This exercise is a refresher on C programming, particularly in use of pointers, different data types, and sorting algorithm.
 *
 * In this exercise we are given an array of size 40, and we are tasked with calculating mean, median, maximum, minimum of this array, in addition to
 * sorting it in descending order.
 *
 * @author Abdalla Hableel
 * @date 4th December 2023.
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief This function simply prints the elements of the given 40-element array.
 *
 * It  takes as an input an unsigned char type array, and a an unsigned int type array size and
 * iterates through it and then prints each indexed element.
 *
 * @param arr The unsigned char type array.
 * @param n The unsigned int type variable which represents the size of the array.
 */
unsigned char print_array(unsigned char *arr, unsigned int *n);

/**
 * @brief This function finds the largest element of the given 40-element array.
 *
 * It  takes as an input an unsigned char type array, and a an unsigned int type array size and
 * finds the largest element by means of linear search.
 *
 * @param arr The unsigned char type array.
 * @param n The unsigned int type variable which represents the size of the array.
 * @return Returns the largest element.
 */
unsigned char find_maximum(unsigned char *arr, unsigned int *n); 

/**
 * @brief This function finds the smallest element of the given 40-element array.
 *
 * It  takes as an input an unsigned char type array, and a an unsigned int type array size and
 * finds the smallest element by means of linear search.
 *
 * @param arr The unsigned char type array.
 * @param n The unsigned int type variable which represents the size of the array.
 * @return Returns the smallest element.
 */
unsigned char find_minimum(unsigned char *arr, unsigned int *n); 

/**
 * @brief This function calculates the mean of the given 40-element array.
 *
 * It  takes as an input an unsigned char type array, and a an unsigned int type array size and
 * calculates the mean (average) of the elements in the array.
 *
 * @param arr The unsigned char type array.
 * @param n The unsigned int type variable which represents the size of the array.
 */
unsigned char find_mean(unsigned char *arr, unsigned int *n); 

/**
 * @brief This function finds the median of an array.
 *
 * It  takes as an input an unsigned char type array, and a an unsigned int type array size and
 * finds the median by first checking if the size of the array is odd, or even such that if its odd,
 * the middle element is defined to be the median, otherwise the average of the two middle elements is
 * taken to be median.
 *
 * @param arr The unsigned char type array.
 * @param n The unsigned int type variable which represents the size of the array.
 */
unsigned char find_median(unsigned char *arr, unsigned int *n);

/**
 * @brief This function sorts a given array in descending order.
 *
 * It  takes as an input an unsigned char type array, and a an unsigned int type array size and
 * sorts the array in descending order by means of bubble-sort.
 *
 * @param arr The unsigned char type array.
 * @param n The unsigned int type variable which represents the size of the array.
 */
unsigned char sort_array(unsigned char *arr, unsigned int *n);

/**
 * @brief This function is merely one that prints the outputs of all the above functions in a neat format, it doesn't take any input.
 *
 * This function doesn't take any input is used as a standalone function call that prints the outputs of the above functions in a formatted way.
 * It is called within the main()'s body.
 */
unsigned char print_statistics();


#endif /* __STATS_H__ */
