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

    return 0;
}