#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	int info;
	struct Nodo *prox;
} nodo;

nodo *insereFinal (nodo *lista, int x){
	nodo *novoNodo = (nodo *)malloc(sizeof(novoNodo));
	
	novoNodo->info = x;
	novoNodo->prox = NULL;
	
	if(lista == NULL){
		return novoNodo;
	}
	
	nodo *aux = lista;
	while(aux->prox != NULL){
		aux = aux->prox;
	}

	aux->prox = novoNodo;
	
	return lista;
}

int main(){
	nodo *lista = NULL;

	lista = insereFinal(lista, 30);
	lista = insereFinal(lista, 20);
	lista = insereFinal(lista, 10);

	while(lista != NULL){
		printf("%d -> ", lista->info);
		lista = lista->prox;
	}
	printf("NULL\n");

	free(lista);

	return 0;
}
