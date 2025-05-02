#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	int info;
	struct Nodo *prox;
} nodo;

nodo *criaNodo(int x){
	nodo *novoNodo = (nodo *)malloc(sizeof(novoNodo));
	
	novoNodo->info = x;
	novoNodo->prox = NULL;

	return novoNodo;
}

int main(){
	nodo *lista = NULL;

	lista = criaNodo(4);
	
	if(lista != NULL){
		printf("Valor do nodo criado: %d\n", lista->info);
	}

	free(lista);

	return 0;
}
