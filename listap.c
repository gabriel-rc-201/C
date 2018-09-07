#include <stdio.h>
#include "lista.h"

int main (void)

{
	Lista* l; //declara uma lista não iniciada
	l = lst_cria(); // inicia uma lista vazia

	l = lst_insere_n (l, 1);
	l = lst_insere_n (l, 2);
	l = lst_insere_n (l, 3);
	l = lst_insere_n (l, 4);
	l = lst_insere_n (l, 5);
	
	int no = comprimento(l);
	int imp = impares (l);

	lst_imprime(l);

	printf("\nquantidade de nós: %d\nquantidade de numeros impares: %d\n", no, imp);
	//Lista *pm = lst_buscamprimo(l);

	//printf("%d %d\n", *pm, pm);

	//printf("\n\nMaior primo na lista é: %d", pm);	

	printf("\n");

	l = lst_retira(l, 5);

	lst_imprime(l);
	
	no = comprimento(l);
	imp = impares (l);

	printf("\nquantidade de nós: %d\nquantidade de numeros impares: %d\n", no, imp);

	lst_libera(l);

	return 0;
}