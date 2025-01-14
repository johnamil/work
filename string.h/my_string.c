#include "my_string.h"
#include <stdio.h>

// Сравнивает первые n байтов str1 и str2.
int memcmp(const void *str1, const void *str2, size_t n) {
    const unsigned char *p1 = (const unsigned char *)str1;
    const unsigned char *p2 = (const unsigned char *)str2;

    for (size_t i = 0; i < n; i++) {
        if (p1[i] != p2[i]) {
            return p1[i] - p2[i];
        }
    }
    return 0;
}



// Сравнивает не более первых n байтов str1 и str2
int strncmp(const char *str1, const char *str2, size_t n) {
  int result = 0;
  size_t i;

  for (i = 0; i < n && *str1 && *str2 && (*str1 == *str2); i++) {
    str1++;
    str2++;
  }

  if (i < n) {
    result = (unsigned char)*str1 - (unsigned char)*str2;
  }

  return result;
}


//Добавляет строку, на которую указывает src, в конец строки, на которую указывает dest, длиной до n символов.
char *strncat(char *str_to, const char *str_from, size_t size) {
  size_t len = 0;
  size_t i = 0;
  while (str_to[len] != '\0') {
    len++;
  }
  for (i = 0; i < size && str_from[i] != '\0'; i++) {
    str_to[len + i] = str_from[i];
  }
  str_to[len + i] = '\0';
  return str_to;
}