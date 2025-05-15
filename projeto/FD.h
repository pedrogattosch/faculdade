#ifndef FD_H
#define FD_H

#include "certificado.h"

#define MAX 101

typedef struct Nodo{
    Certificado *info;
    struct Nodo *prox;
} nodo;

typedef struct{
    Certificado *v[MAX];
    nodo *inicio, *fim;
} Fila;

Fila *cria_fila();
void pushFila(Fila *f, Certificado *cert);
Certificado *popFila(Fila *f);
void libera_fila(Fila *f);

#endif