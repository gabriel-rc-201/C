/* TAD: lista de inteiros */

typedef struct lista Lista;

Lista* lst_cria(void); // cria uma lista vazia

void lst_insere (Lista** l, int i);// insere no inicio, atualiza o valor da lista

Lista* lst_insere_n (Lista* l, int i);

//void lst_insere_fim(Lista** l, int i);// insere no fim

void lst_imprime(Lista* l); // função imprime, imprime os valores dos elementos, percorre todos os elementos da lista

int lst_vazia(Lista* l); // verifica se a lista esta vazia

Lista* lst_busca(Lista* l, int v); // busca um elemento na lista

Lista* lst_retira(Lista* l, int v); // retira um elemento da lista

void lst_libera(Lista* l); // libera a lista

int lst_buscamprimo(Lista* l); // retorna o maior numero primo

int comprimento (Lista* l); // retorna o numero de nos de uma lista

int impares (Lista* l); // retorna a quantidade de números impares na lista