#ifndef FE_H
#define FE_H

#define MAX 101

typedef struct{
    char nome[MAX];
    int horas;
} Certificado;

typedef struct{
    Certificado *v[MAX];
    int inicio, fim, tamanho;
} Fila;

Fila *cria_fila();
void pushFila(Fila *f, Certificado *cert);
Certificado *popFila(Fila *f);
void libera_fila(Fila *f);

#endif