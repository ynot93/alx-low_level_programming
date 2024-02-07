#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_2(int *array, size_t low, size_t high, int value);

#endif
