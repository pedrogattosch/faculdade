#ifndef FE_H
#define FE_H

#define MAX 101

typedef struct{
    int v[MAX];
    int inicio, fim, tam;
} Fila;

Fila *cria_fila();
void pushFila(Fila *f, int x);
void popFila(Fila *f);

#endif
