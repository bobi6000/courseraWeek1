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
 * @file stats.h 
 * @brief Header file with  declarations of functions from stats.c
 *
 * File includes declarations and documentation functions and variables.  
 *
 * @author pawel stanak
 * @date 01.08.2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
* @brief Function prints the statistics of data array e.g. minimum, maximum, mean and median value.
* @param
* @return
*
*/
void print_statistics (void);

/**
* @brief Function prints data array.
* @param
* @return
*/
void print_array(unsigned char *arr);

/**
* @brief Function calculates median value of data set.
* @param *arr pointer to array
* @return
*/
int find_median (void);

/**
* @brief Function calculates mean value of data set .
* @param 
* @return
*/
int find_mean(void);

/**
* @brief Function searches maximum value in data set.
* @param *arr pointer to array
* @return max maximal value from data array
*/
int find_maximum(unsigned char *arr);

/**
* @brief Function searches minimum value in data set.
* @param *arr pointer to array
* @return min minimal value from data array
*/
int find_minimum(unsigned char *arr);

/**
* @brief Function sorts data from minimal to maximal value.
* @param
* @return
*/
void sort_array(void);


#endif /* __STATS_H__ */
