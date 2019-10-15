/*TAD: Pilha*/

typedef struct pilha Pilha;

Pilha* pilha_cria(void);//cria uma pilha

int pilha_vazia(Pilha* p);// verifica se a pilha e vazia

void pilha_push(Pilha* p, int i);//adiciona elemento no topo da pilha

int pilha_pop(Pilha* p);// retira um elemento da pilha

void pilha_imprime(Pilha* p);// imprime os elementos da pilha

void pilha_libera(Pilha* p);//libera a pilha