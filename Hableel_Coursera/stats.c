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
 * @file Statistics program.
 * @brief This C program is an C programming refresher, where the functions described below are computed.
 *
 * We compute the mean, median, maximum, minimum of a given array, finally, we sort the array from largest to smallest.
 *
 * @author Abdalla Hableel
 * @date 4th December 2023.
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
unsigned char find_maximum(unsigned char *arr, unsigned int *n);
unsigned char find_minimum(unsigned char *arr, unsigned int *n);
unsigned char find_mean(unsigned char *arr, unsigned int *n);
unsigned char find_median(unsigned char *arr, unsigned int *n);
unsigned char sort_array(unsigned char *arr, unsigned int *n);


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  unsigned int arraySize = SIZE;


  unsigned char print_array(unsigned char *arr, unsigned int *n){
  int i = 0;
  printf("Printing Array: \n");
  for(i; i < *n; i++ ){
    printf("%d \n", arr[i]);
    };
  printf("-------------\n");
  }

  unsigned char find_maximum(unsigned char *arr, unsigned int *n) {
    for (unsigned int i = 0; i < *n; ++i) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }
    return arr[0];
}

  unsigned char find_minimum(unsigned char *arr, unsigned int *n){
    for (unsigned int i = 0; i < *n; ++i) {
          if (arr[0] > arr[i]) {
              arr[0] = arr[i];
          }
      }
      return arr[0];
  }

  unsigned char find_mean(unsigned char *arr, unsigned int *n){
    int count = 0;
    for(int i = 0; i < *n; ++i){
      count += arr[i];
    };
    int mean = count / *n;
  }

  unsigned char find_median(unsigned char *arr, unsigned int *n){
    int half = *n/2;
    if(*n % 2 != 0){
      int median = arr[*n - (half+ 1)];
    }
    else{
      int median = (arr[half] + arr[half + 1]) /2;
    };
  }

  unsigned char sort_array(unsigned char *arr, unsigned int *n){
    int i, j, t = 0; 
      
      // iterates the array elements 
      for (i = 0; i < *n; i++) { 
          
          // iterates the array elements from index 1 
          for (j = i + 1; j < *n; j++) { 
              
              // comparing the array elements, to set array 
              // elements in descending order 
              if (arr[i] < arr[j]) { 
                  t = arr[i]; 
                  arr[i] = arr[j]; 
                  arr[j] = t; 
              } 
          } 
      }
      printf("Printing sorted array in descending order: \n");
      for (i = 0; i < *n; i++) { 
          printf("%d \n", arr[i]); 
      }
      printf("------------ \n"); 
      return 0;  
  } 

  // Below we define function calls for all functions above:

  unsigned char printed_array = print_array(test, &arraySize);
  unsigned char max_value = find_maximum(test, &arraySize);
  unsigned char min_value = find_minimum(test, &arraySize);
  unsigned char mean_value = find_mean(test, &arraySize);
  unsigned char median_value = find_median(test, &arraySize);
  unsigned char sorted_array = sort_array(test, &arraySize);

  unsigned char print_statistics(){
  printf("Array statistics is given by:\n Maximum value: %hhu \n Minimum value: %hhu \n Mean value: %hhu \n Median value: %hhu \n", max_value, min_value, mean_value, median_value);
  }

  print_statistics();

}
