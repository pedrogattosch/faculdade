#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	int info;
	struct Nodo *prox;
} nodo;

nodo *insereInicio(nodo *lista, int x){
	nodo *novoNodo = (nodo *)malloc(sizeof(novoNodo));
	
	novoNodo->info = x;
	novoNodo->prox = lista;

	return novoNodo;
}

int main(){
	nodo *lista = NULL;

	lista = insereInicio(lista, 30);
	lista = insereInicio(lista, 23);
	lista = insereInicio(lista, 1);

	while(lista != NULL){
		printf("%d -> ", lista->info);
		lista = lista->prox;
	}
	printf("NULL\n");

	free(lista);

	return 0;
}
