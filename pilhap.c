#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

void main(void)
{
	Pilha* p = pilha_cria();

	int vazia = pilha_vazia(p);

	printf("%d\n", vazia);

	pilha_push(p, 1);
	pilha_push(p, 2);
	pilha_push(p, 3);
	pilha_push(p, 4);
	pilha_push(p, 5);
	pilha_push(p, 6);
	pilha_push(p, 7);
	pilha_push(p, 8);
	pilha_push(p, 9);
	pilha_push(p, 10);


	vazia = pilha_vazia(p);
	printf("%d\n\n", vazia);

	pilha_imprime(p);

	pilha_pop(p);
	pilha_pop(p);
	pilha_pop(p);
	pilha_pop(p);
	pilha_pop(p);
	pilha_pop(p);
	pilha_pop(p);

	vazia = pilha_vazia(p);
	printf("%d\n", vazia);

	pilha_imprime(p);

	pilha_libera(p);
}