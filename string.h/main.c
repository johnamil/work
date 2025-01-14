#include <stdio.h>
#include "my_string.h"

int main() {
    char array1[] = "Hello, World!";
    char array2[] = "Hello, World!";
    char array3[] = "Hello, C Programming!";

    // Сравнение одинаковых массивов
    int result1 = memcmp(array1, array2, sizeof(array1));
    printf("Comparison result of array1 and array2: %d\n", result1);

    // Сравнение разных массивов
    int result2 = memcmp(array1, array3, sizeof(array1));
    printf("Comparison result of array1 and array3: %d\n", result2);

    // Сравнение первых 5 байт
    int result3 = memcmp(array1, array3, 5);
    printf("Comparison result of first 5 bytes of array1 and array3: %d\n", result3);


 // Тестирование функции strncmp
    char str1[] = "Hello, World!";
    char str2[] = "Hello, C Programming!";
    char str3[] = "Hello, World!";

    // Сравнение первых 8 символов (для получения различия на 8-й позиции)
    int strncmp_result1 = strncmp(str1, str2, 8);
    printf("strncmp result of first 8 characters: %d\n", strncmp_result1);

    int strncmp_result2 = strncmp(str1, str2, 7); // Оставляем это для 7 символов
    printf("strncmp result of first 7 characters: %d\n", strncmp_result2);

    int strncmp_result3 = strncmp(str1, str3, sizeof(str1));  // Используем my_strlen для длины
    printf("strncmp result of str1 and str3: %d\n", strncmp_result3);


   // Тестирование функции strncat
    char dest[50] = "Hello";
    const char *src = ", World!";
    strncat(dest, src, 7);
    printf("Resulting string after strncat: %s\n", dest);
    // Ожидаемый результат: "Hello, World"

    return 0;
}