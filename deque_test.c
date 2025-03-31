#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

int main ()
{
    struct deque *d;
    int data;

    printf ("Test 1: create deque\n");
    d = deque_make ();
    deque_print (d);
    printf ("\n\n");

    
    printf ("Test 2: push_front\n");
    push_front (d, 1);
    deque_print (d);
    push_front (d, 2);
    deque_print (d);
    push_front (d, 3);
    deque_print (d);
    printf ("\n\n");

    
    printf ("Test 3: pop_front\n");
    data = pop_front (d);
    printf ("%d\n", data);
    deque_print (d);
    data = pop_front (d);
    printf ("%d\n", data);
    deque_print (d);
    data = pop_front (d);
    printf ("%d\n", data);
    deque_print (d);
    data = pop_front (d);
    printf ("%d\n", data);
    deque_print (d);
    printf ("\n\n");


    printf ("Test 4: push_back\n");
    push_back (d, 1);
    deque_print (d);
    push_back (d, 2);
    deque_print (d);
    push_back (d, 3);
    deque_print (d);
    printf ("\n\n");

    
    printf ("Test 5: pop_back\n");
    data = pop_back (d);
    printf ("%d\n", data);
    deque_print (d);
    data = pop_back (d);
    printf ("%d\n", data);
    deque_print (d);
    data = pop_back (d);
    printf ("%d\n", data);
    deque_print (d);
    data = pop_back (d);
    printf ("%d\n", data);
    deque_print (d);
    printf ("\n\n");

    
    push_front (d, 1);
    push_front (d, 2);
    push_front (d, 3);
    printf ("Current deck: ");
    deque_print (d);
    printf ("\n");

    
    printf ("Test 6: peek_front\n");
    data = peek_front (d);
    printf ("%d\n", data);
    printf ("\n\n");


    printf ("Test 7: peek_back\n");
    data = peek_back (d);
    printf ("%d\n", data);
    printf ("\n\n");

    
    printf ("Test 8: destroy deque\n");
    deque_destroy (&d);
    

    return 0;
}