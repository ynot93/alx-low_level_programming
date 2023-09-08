#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_handle(int exit_code, const char *format, const char *arg);
void print_elf(const Elf64_Ehdr *header);

#endif
