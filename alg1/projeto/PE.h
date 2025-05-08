#ifndef PE_H
#define PE_H

#define MAX 101

typedef struct{
    int v[MAX];
    int topo;
} Pilha;

Pilha *cria_pilha();
void pushPilha(Pilha *p, int x);
int popPilha(Pilha *p);

#endif
