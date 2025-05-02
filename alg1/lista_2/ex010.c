#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	int info;
	struct Nodo *prox;
} nodo;

void insereApos(nodo *lista, int x){
	if(lista == NULL) return;
	nodo *novoNodo = (nodo *)malloc(sizeof(novoNodo));
	
	novoNodo->info = x;
	novoNodo->prox = lista->prox;
	
	lista->prox = novoNodo;
}

nodo *criaNodo(int x){
	nodo *novoNodo = (nodo *)malloc(sizeof(nodo));
	
	novoNodo->info = x;
	novoNodo->prox = NULL;

	return novoNodo;
}

nodo *remover(nodo *lista, int x){

}

void imprime(nodo *lista){
	if(lista == NULL){
		printf("NULL\n");
		return;
	}
	
	printf("%d -> ", lista->info);
	imprime(lista->prox);
}

int main(){
	nodo *lista = criaNodo(65);
	insereApos(lista, 3);

	imprime(lista);
	
	free(lista);

	return 0;
}
