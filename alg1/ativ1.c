#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    int info;
    struct Nodo *prox;
} nodo;

nodo *inserefinal(nodo *lista, int x) {
    if(lista == NULL){
        nodo *novo = (nodo *)malloc(sizeof(nodo));
        novo->info = x;
        novo->prox = NULL;
        return novo;
    }
    lista->prox = inserefinal(lista->prox, x);
    return lista;
}

void contrario(nodo *lista){
    if(lista == NULL) return;
    contrario(lista -> prox);
    printf("%d ", lista -> info);
}

int maior(nodo *lista){
    if(lista->prox == NULL) return lista -> info;
    int max = maior(lista -> prox);
    if(lista -> info > max){
        return lista->info;
    } else{
        return max;
    }
}

double media(nodo *lista){
    double soma = 0;
    int cont = 0;
    nodo *aux = lista;

    while(aux != NULL){
            soma += aux->info;
            cont++;
            aux = aux -> prox;
    }

    if(cont == 0) return 0;
    return soma / cont;
}

void libera(nodo *lista){
    if(lista == NULL) return;
    libera(lista -> prox);
    free(lista);
}

int main(){
    int num = 0;
    nodo *lista = NULL;

    while (1){
        scanf("%d", &num);
        if(num == -1) break;
        if (num != -1){
            lista = inserefinal(lista, num);
        }
    }

    printf("%d\n", maior(lista));
    printf("%.3f\n", media(lista));
    contrario(lista);
    printf("\n");

    libera(lista);

    return 0;
}
