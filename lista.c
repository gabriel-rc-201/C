#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct lista Lista;

struct lista
	{
		int info;
		Lista* prox;
	};

Lista* lst_cria(void) // cria uma lista vazia
	{
		return NULL;
	}
	
/*
void lst_insere_fim (Lista** l, int i)
{
	Lista* aux;
	aux = l;

	Lista* novo = (Lista*) malloc(sizeof(Lista));
	if(novo == NULL)
	{
		printf("mah não tem memória \nmalz awe \nvlw \nflw\n");
		exit(1);
	}

	novo->info = i;
	novo->prox = NULL;
	
	*l = novo;
} */

Lista* lst_insere_n (Lista* l, int i) // chamada da função: l = lst_insere_n (l, 12);
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));

	if(novo == NULL)
	{
		printf("mah não tem memória \nmalz awe \nvlw \nflw\n");
		exit(1);
	}

	novo->info = i;
	novo->prox = l;

	return novo;
}

void lst_insere (Lista** l, int i) //insere no inicio e ja atualiza a lista
	{
		Lista* novo = (Lista*) malloc(sizeof(Lista));
		if(novo == NULL)
		{
			printf("mah não tem memória \nmalz awe \nvlw \nflw\n");
			exit(1);
		}

		novo->info = i;  //chamada_exp: lst_insere(&l,23);
		novo->prox = *l;

		*l = novo;
	}

void lst_imprime (Lista* l)// imprime a lista, com isso acaba percorrendo toda ela
	{
		Lista* p; // variavel auxiliar para percorrer a lista

		for (p = l; p != NULL; p = p->prox)
			printf("info = %d\n", p->info);
	}

int lst_vazia(Lista* l)// verifica se a lista esta vazia
	{
		return (l == NULL);
	}

Lista* lst_busca (Lista* l, int v) // busca um elemento na lista
	{
		Lista* p;

		for ( p = l; p != NULL; p = p->prox)
		{
			if (p->info == v)
				return p;
		}

		return NULL; // não achou o elemento
	}

Lista* lst_retira (Lista* l, int v)
{
	Lista* ant = NULL; // ponteiro para elemento anterior
	Lista* p = l; // ponteiro para percorrer a lista

	while (p != NULL && p->info != v)// verifica os elementos guardados anteriores
	{
		ant = p;
		p = p->prox;
	}

	if (p == NULL) return l; // não achou, retorna a lista original

	//retira o elemento
	if (ant == NULL)
	{
		l = p->prox;// retira elemento do inicio
	}

	else
	{
		ant->prox = p->prox; // retira o elemento do meio da lista
	}

	free(p);
	return l;
}

void lst_libera(Lista* l)
{
	Lista* p = l;
	while(p != NULL)
	{
		Lista* t = p->prox; // guarda referencia para o proximo elemento
		free(p);			// libera memória apontada por p
		p = t;				// faz apontar para o proximo
	}
}

/*
Lista* lst_buscamprimo(Lista* l)
{
	Lista* p;
	int maior = 0;
	
	for(p = l; p != NULL; p = p->prox)
	{
		int aux = 1;
		int cont = 0;
		
		while(p->info/aux != 1)
		{
			if(p->info%aux == 0)
			{
				
				cont++;
			}

			aux++;
		}

		if(cont == 1)
		{
			if(p->info > maior) maior = p->info;
		}

	}
	printf("oi zé %p", &p->info);
	printf("\n");
	if(maior == 0) return NULL;
	else return p;
}
*/

// &p->info inprime o enderço de memoória

int comprimento (Lista* l)
{
	Lista* ponteiro = l;
	int cont = 0;
	while(ponteiro != NULL)
	{
		ponteiro = ponteiro->prox;
		cont++;
	}

	return cont;
}

int impares (Lista* l)
{
	Lista* ponteiro = l;
	int cont = 0;
	while(ponteiro != NULL)
	{
		if(ponteiro->info%2 != 0) cont++;

		ponteiro = ponteiro->prox;
	}

	return cont;
}