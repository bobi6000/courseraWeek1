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
 * @brief File includes functions for  analyze data.
 *
 * In fils There are eight functions to analyze data set in array.
 *
 * @author pawel staniak
 * @date 01.08.2017
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

  print_array(&test);
  printf("Maximal value of data = %d \n",find_maximum(&test));
  printf("Minimal value of data = %d \n",find_minimum(&test));
  printf("Mean value of data = %d \n",find_mean(&test));
}

void print_statistics (void){

}

void print_array (unsigned char *arr){
unsigned int i=0U;

 for (i=0;i<SIZE;i++)
	printf("index=%d \t value=%d \n",i,*(arr+i));
}

int find_median (void){

return 0;
}

char find_mean (unsigned char *arr){

unsigned int i=0U;
unsigned int mean=0U;

 for(i=0;i<SIZE;i++)
  	mean+=*(arr+i);
 
mean/=SIZE;
return (char)mean;
}

int find_maximum (unsigned char *arr){
unsigned int i=0U;
unsigned char max=0U;
max=*arr;
 for(i=0;i<SIZE;i++){
  if(max<=*(arr+i))max=*(arr+i);
 }

return max;
}

int find_minimum (unsigned char *arr){
unsigned int i=0U;
unsigned char min=0U;
min=*arr;
 for(i=0;i<SIZE;i++){
  if(min>=*(arr+i))min=*(arr+i);
 }

return min;
}

void sort_array(void){
}
