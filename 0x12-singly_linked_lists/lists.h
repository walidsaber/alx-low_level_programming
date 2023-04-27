#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>

struct list_s
{
    char *str;
    int len;
    struct list_s* next;
};

typedef struct list_s list_t;

size_t print_list(const list_t *h);



#endif
