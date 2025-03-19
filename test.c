#include "neovec.h"
#include <stdio.h>

typedef struct
{
    char **items;
    size_t count;
    size_t capacity;
} arr_t;

int main()
{
    arr_t arr = NEOVEC_INIT;
    neovec_append(&arr, "hello, ");
    neovec_append(&arr, "world");

    char **element;
    neovec_foreach(char *, element, &arr)
    {
        printf("%s\n", *element);
    }
}