#include <stdlib.h>
#include "PE.h"

Pilha *cria_pilha(){
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = -1;

    return p;
}

void pushPilha(Pilha *p, Certificado *cert){
    p->topo++;
    p->v[p->topo] = cert;
}

Certificado *popPilha(Pilha *p){
    Certificado *cert = p->v[p->topo];
    p->topo--;

    return cert;
}

void libera_pilha(Pilha *p){
    free(p);
}   
