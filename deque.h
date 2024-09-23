struct nodo
{
    int data;
    struct nodo *prev;
    struct nodo *next;
};

struct deque
{
    struct nodo *str;
    struct nodo *end;
    int size;
};

//Cria e retorna deque vazio
struct deque *deque_make ();

//Desaloca toda memoria do deque e aterra
void deque_destroy (struct deque **deque);

//Insere dado no inicio do deque
void push_front (struct deque *deque, int dado);

//Insere dado no fim do deque
void push_back (struct deque *deque, int dado);

//Retorna dado que esta no inicio do deque
int peek_front (struct deque *deque);

//Retorna dado que esta no fim do deque
int peek_back (struct deque *deque);

//Retira dado do inicio do deque
int pop_front (struct deque *deque);

//Retira dado do fim do deque
int pop_back (struct deque *deque);

//Retorna 1 se deque vazio, no caso contrario
char deque_empty (struct deque *deque);

//Retorna tamanho do deque
int deque_size (struct deque *deque);