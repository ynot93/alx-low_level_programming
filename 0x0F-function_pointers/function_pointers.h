#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#define NULL ((void *)0)

void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif
