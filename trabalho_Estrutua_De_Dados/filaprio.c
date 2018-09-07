#include <stdio.h>
#define infinito 100000000
#include "filaprio.h"
/* Funções auxiliares */
int paidono(int i)
{
	if (i%2 != 0)
		return i/2;
	else
		return (i/2) - 1;
}

int pai(int i)
{
	return i;
}

int fesq (int i)
{
	return 2*i + 1;
}

int fdir (int i)
{
	return 2*i + 2;
}

void Max_Heapify(int i, FilaP* f)
{
    int l = fesq(i);
    int r = fdir(i);
    int maior;

    if(l <= f->t_heap && f->v[l] > f->v[i])
        maior = l;
    else
        maior = i;
    if(r <= f->t_heap && f->v[r] > f->v[maior])
        maior = r;
    if(maior != i)
    {
        int temp = f->v[i];
        f->v[i] = f->v[maior];
        f->v[maior] = temp;
        Max_Heapify(maior, f);
    }
}
/* Fim Funções auxiliares */

FilaP* filap_cria()
{
	return NULL;
}

int heap_maximum(FilaP* f)
{
	return f->v[0];
}

int heap_extract_max(FilaP* f)
{
	if (f->t_heap < 1) return 0;//heap underflow
	
	int maoir = f->v[0];
	
	f->t_heap --;
	
	Max_Heapify(0, f);

	return maoir;
}

void heap_increase_key(FilaP* f, int ind, int chave)
{
	int aux;

	if (chave < f->v[ind])
	{
		printf("erro chave menor que a atual\n");
	}
	
	else
	{
		f->v[ind] = chave;
		while (ind > 0 && ( f->v[paidono(ind)] < f->v[ind]))
		{
			aux = f->v[ind];
			f->v[ind] = f->v[paidono(ind)];
			f->v[paidono(ind)] = aux;
			ind = paidono(ind);
		}
	}
}

void max_heap_insert(FilaP* f, int chave)
{
	f->t_heap ++;
	f->v[f->t_heap] = -infinito;
	heap_increase_key(f, f->t_heap, chave);
}