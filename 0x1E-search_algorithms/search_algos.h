#ifndef SERACH_ALGOS_H
#define SERACH_ALGOS_H
#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_r(int *array, size_t left, size_t right,  int value);

#endif
