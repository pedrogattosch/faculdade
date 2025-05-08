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
    nodo *atual = lista;
    nodo *anterior = NULL;

    while (atual != NULL){
        if (atual->info == x){
            nodo *temp = atual;
            if(anterior == NULL){
                lista = atual->prox;
                atual = lista;
            } else{
                anterior->prox = atual->prox;
                atual = atual->prox;
            }
            free(temp);
        } else{
            anterior = atual;
            atual = atual->prox;
        }
    }
    return lista;
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

	imprime(lista);

	remover(lista, 21);

	imprime(lista);

	free(lista);

	return 0;
}
