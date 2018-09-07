/*TAD Fila*/

typedef struct fila Fila;

Fila* fila_cria(void);//cria uma fila

int fila_vazia(Fila* f);//testa se uma fila é vazia

void fila_insere(Fila* f, int i);//insere um elemento na fila

int fila_remove(Fila* f);//remove um elemento da fila

void fila_imprime(Fila* f);//imprime os elementos de uma fila

void fila_libera(Fila* f);//libera o espaço alocado pela fila 