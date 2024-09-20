#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

struct deque *deque_make ()
{
    struct deque *d;

    d = malloc (sizeof(struct deque));
    if (d == NULL)
        return NULL;

    d->str = NULL;
    d->end = NULL;
    d->size = 0;

    return d;
}