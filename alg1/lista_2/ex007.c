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

void imprime(nodo *lista){
	if(lista == NULL){
		printf("NULL\n");
		return;
	}
	
	imprime(lista->prox);
	printf("%d -> ", lista->info);
}

int main(){
	nodo *lista = NULL;

	lista = insereFinal(lista, 20);
	lista = insereFinal(lista, 10);
	lista = insereFinal(lista, 40);

	imprime(lista);

	free(lista);

	return 0;
}
