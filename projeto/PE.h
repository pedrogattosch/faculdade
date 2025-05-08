#ifndef PE_H
#define PE_H

#include "certificado.h"

#define MAX 101

typedef struct{
    Certificado *v[MAX];
    int topo;
} Pilha;

Pilha *cria_pilha();
void pushPilha(Pilha *p, Certificado *cert);
Certificado *popPilha(Pilha *p);
void libera_pilha(Pilha *p);

#endif
