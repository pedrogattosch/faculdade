#include <stdlib.h>
#include "PD.h"

Pilha *cria_pilha(){
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = NULL;

    return p;
}

void pushPilha(Pilha *p, Certificado *cert){
    nodo *novo = (nodo *)malloc(sizeof(nodo));
    novo->info = cert;
    novo->prox = p->topo;
    p->topo = novo;
}

Certificado *popPilha(Pilha *p){
    Certificado *cert = p->topo->info;
    nodo *aux = p->topo->prox;
    free(p->topo);
    p->topo = aux;

    return cert;
}

void libera_pilha(Pilha *p){
    free(p);
}   
