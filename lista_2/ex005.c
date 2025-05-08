#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	int info;
	struct Nodo *prox;
} nodo;

nodo *insereFinal(nodo *lista, int x){
	nodo *novoNodo = (nodo *)malloc(sizeof(novoNodo));
	if(lista == NULL){
		novoNodo->info = x;
		novoNodo->prox = NULL;
		
		return novoNodo;
	} else{
		lista->prox = insereFinal(lista->prox, x);
		return lista;
	}
}

int main(){
	nodo *lista = NULL;

	lista = insereFinal(lista, 20);
	lista = insereFinal(lista, 10);
	lista = insereFinal(lista, 40);

	while(lista != NULL){
		printf("%d -> ", lista->info);
		lista = lista->prox;
	}
	printf("NULL\n");

	free(lista);

	return 0;
}
