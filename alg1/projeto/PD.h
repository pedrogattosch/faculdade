#ifndef PD_H
#define PD_H

#define MAX 101

typedef struct Nodo{
    int info;
    struct Nodo *prox;
} nodo;

typedef struct{
    nodo *topo;
} Pilha;

Pilha *cria_pilha();
void pushPilha(Pilha *p, int x);
int popPilha(Pilha *p);

#endif
