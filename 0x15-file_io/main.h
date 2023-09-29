#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_handle(int exit_code, const char *format, const char *arg);
void check_elf(unsigned char *e_ident);
void read_elf_header(int fd, Elf64_Ehdr *header);
void print_entry(unsigned long int e_entry, unsigned char e_ident);
void print_elf_type(unsigned int e_type);
void print_abi(unsigned char e_ident);
void print_osabi(unsigned char e_ident);
void print_elf_version(unsigned char e_ident);
void print_elf_data(unsigned char e_ident);
void print_elf_class(unsigned char e_ident);
void print_magic_header(unsigned char *e_ident);

#endif
