#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void main(void)
{
	Fila* f = fila_cria();

	int vazio = fila_vazia(f);
	printf("%d\n", vazio);

	fila_insere(f, 1);
	fila_insere(f, 2);
	fila_insere(f, 3);
	fila_insere(f, 4);
	fila_insere(f, 5);

	vazio = fila_vazia(f);
	printf("%d\n", vazio);

	fila_imprime(f);

	fila_remove(f);
	fila_remove(f);


	vazio = fila_vazia(f);
	printf("%d\n", vazio);

	fila_imprime(f);

	fila_remove(f);
	fila_remove(f);

	vazio = fila_vazia(f);
	printf("%d\n", vazio);
	
	fila_imprime(f);
	
	vazio = fila_vazia(f);
	printf("%d\n", vazio);
	
	fila_remove(f);

	vazio = fila_vazia(f);
	printf("%d\n", vazio);

	fila_imprime(f);

	fila_libera(f);
}