#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_2(int *array, size_t low, size_t high, int value);
int advanced_binary_recursive(int *array, size_t start, size_t end, int value);
int advanced_binary(int *array, size_t size, int value);

/* Data Structures */
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;
#endif
