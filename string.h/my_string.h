#ifndef MY_STRING_H
#define MY_STRING_H

#include <stddef.h>
#include <stdio.h>

int memcmp(const void *str1, const void *str2, size_t n);
int strncmp(const char *str1, const char *str2, size_t n);
char *strncat(char *str_to, const char *str_from, size_t size);

#endif // MY_STRING_H