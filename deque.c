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

void push_front (struct deque *d, int dado)
{
    struct nodo *new;

    new = malloc (sizeof(struct nodo));
    if (new == NULL)
    {
        printf ("Falha na alocacao");
        return;
    }

    new->data = dado;
    new->prev = NULL;
    new->next = NULL;

    if (deque_empty(d))
    {
        d->str = new;
        d->end = new;
        (d->size)++;

        return;
    }

    if (deque_size(d) == 1)
    {
        new->next = d->str;
        d->str = new;
        d->end->prev = new;
        (d->size)++;

        return ;
    }

    new->next = d->str;
    d->str = new;
    (d->size)++;

    return;
}

int pop_front (struct deque *d)
{
    struct nodo *aux;
    int dado;

    if (deque_empty(d))
    {
        printf ("Falha: deque vazio\n");
        return 0;
    }

    aux = d->str;
    d->str = aux->next;
    dado = aux->data;
    (d->size)--;

    free (aux);
    aux = NULL;

    return dado;
}

void push_back (struct deque *d, int dado)
{
    struct nodo *new, *aux;
}

char deque_empty (struct deque *d)
{
    if (d->size == 0)
        return 1;

    return 0;
}

int deque_size (struct deque *d)
{
    return d->size;
}