#include <stdio.h>
#include <stdlib.h>
#include "filaprio.h"

int main(int argc, char const *argv[])
{
	
	FilaP* fp = filap_cria();
	int a;

	max_heap_insert(fp,34);
	max_heap_insert(fp,11);
	max_heap_insert(fp,45);
	max_heap_insert(fp,78);
	max_heap_insert(fp,92);
	max_heap_insert(fp,66);
	
	printf("Prioridade: %d\n", heap_maximum(fp));
	
	a = heap_extract_max(fp);
	
	printf("Prioridades:%d e %d\n", a, heap_maximum(fp));
	
	a = heap_extract_max(fp);
	
	printf("Prioridade: %d e %d\n", a, heap_maximum(fp));
	
	heap_increase_key(fp,2,200);
	
	printf("Elem. maior prioridade: %d\n", heap_maximum(fp));
	
	return 0;
}