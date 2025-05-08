#include <stdlib.h>
#include "PD.h"

Pilha *cria_pilha(){
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = NULL;

    return p;
}

void push(Pilha *p, int x){
    nodo *novo = (nodo *)malloc(sizeof(nodo));
    novo->info = x;
    novo->prox = p->topo;
    p->topo = novo;
}

int pop(Pilha *p){
    int x = p->topo->info;
    nodo *aux = p->topo->prox;
    free(p->topo);
    p->topo = aux;

    return x;
}
