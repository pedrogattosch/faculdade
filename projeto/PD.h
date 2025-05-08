#ifndef PD_H
#define PD_H

#define MAX 101

typedef struct{
    char nome[MAX];
    int horas;
} Certificado;

typedef struct Nodo{
    Certificado *info;
    struct Nodo *prox;
} nodo;

typedef struct{
    nodo *topo;
} Pilha;


Pilha *cria_pilha();
void pushPilha(Pilha *p, Certificado *cert);
Certificado *popPilha(Pilha *p);
void libera_pilha(Pilha *p);

#endif
