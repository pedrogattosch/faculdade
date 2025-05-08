#ifndef PE_H
#define PE_H

#define MAX 101

typedef struct{
    int v[MAX];
    int topo;
} Pilha;

typedef struct{
    char nome[MAX];
    int horas;
} Certificado;

Pilha *cria_pilha();
void pushPilha(Pilha *p, Certificado *cert);
Certificado *popPilha(Pilha *p);
void libera_pilha(Pilha *p);

#endif
