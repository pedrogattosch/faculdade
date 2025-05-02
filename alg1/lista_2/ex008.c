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

nodo *busca(nodo *lista, int x){
	while(lista != NULL){
		if(lista->info == x){
			return lista;
		}
		lista = lista->prox;
	}

	return NULL;
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
	nodo *lista = NULL;

	lista = insereFinal(lista, 20);
	lista = insereFinal(lista, 10);
	lista = insereFinal(lista, 40);

	imprime(lista);
	
	nodo *resultado = busca(lista, 10);
	printf("Elemento %d encontrado no endereço %p\n", resultado->info, (void *)resultado);

	free(lista);

	return 0;
}
