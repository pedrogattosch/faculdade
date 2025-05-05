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
    if(lista == NULL) return NULL;

    lista->prox = remover(lista->prox, x);

    if(lista->info == x){
        nodo *temp = lista->prox;
        free(lista);
        return temp;
    }

    return lista;
}

int soma_iterativa(nodo *lista){
    int soma = 0;

    while (lista != NULL){
        soma += lista->info;
        lista = lista->prox;
    }

    return soma;
}

int soma_recursiva(nodo *lista){
    if (lista == NULL) return 0;
    return lista->info + soma_recursiva(lista->prox);
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
	insereApos(lista, 14);
	insereApos(lista, 21);
	insereApos(lista, 3);

	printf("%d\n", soma_iterativa(lista));
	printf("%d\n", soma_recursiva(lista));

	imprime(lista);

	remover(lista, 21);

	imprime(lista);

	free(lista);

	return 0;
}


