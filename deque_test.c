#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

void deque_print (struct deque *d)
{
    struct nodo *aux;

    if (deque_empty (d))
    {
        printf ("Deque vazio\n");
        return;
    }

    aux = d->str;

    while (aux != NULL)
    {
        printf ("%d ", aux->data);
        aux = aux->next;
    }

    printf ("\nTamanho do deque: %d\n", deque_size (d));

    return;
}

int main ()
{
    struct deque *d;
    int dado;

    printf ("Teste 1: criar deque e ver se esta vazio\n");
    d = deque_make ();
    deque_print (d);
    printf ("\n\n");

    
    printf ("Teste 2: inserir 3 elementos no comeco\n");
    push_front (d, 1);
    deque_print (d);
    push_front (d, 2);
    deque_print (d);
    push_front (d, 3);
    deque_print (d);
    printf ("\n\n");

    
    printf ("Teste 3: remover 3 elementos do inicio\n");
    dado = pop_front (d);
    printf ("Removido: %d\n", dado);
    deque_print (d);
    dado = pop_front (d);
    printf ("Removido: %d\n", dado);
    deque_print (d);
    dado = pop_front (d);
    printf ("Removido: %d\n", dado);
    deque_print (d);
    dado = pop_front (d);
    printf ("Removido: %d\n", dado);
    deque_print (d);
    printf ("\n\n");


    printf ("Teste 4: inserir 3 elementos no final\n");
    push_back (d, 1);
    deque_print (d);
    push_back (d, 2);
    deque_print (d);
    push_back (d, 3);
    deque_print (d);
    printf ("\n\n");

    
    printf ("Teste 5: remover 3 elementos do final\n");
    dado = pop_back (d);
    printf ("%d\n", dado);
    deque_print (d);
    dado = pop_back (d);
    printf ("%d\n", dado);
    deque_print (d);
    dado = pop_back (d);
    printf ("%d\n", dado);
    deque_print (d);
    dado = pop_back (d);
    printf ("%d\n", dado);
    deque_print (d);
    printf ("\n\n");

    
    push_front (d, 1);
    push_front (d, 2);
    push_front (d, 3);
    printf ("Deque atual: ");
    deque_print (d);
    printf ("\n");

    
    printf ("Teste 6: ver elemento do comeco\n");
    dado = peek_front (d);
    printf ("%d\n", dado);
    printf ("\n\n");


    printf ("Teste 7: ver elemento do final\n");
    dado = peek_back (d);
    printf ("%d\n", dado);
    printf ("\n\n");

    
    printf ("Teste 8: destruir deque\n");
    deque_destroy (&d);
    

    return 0;
}