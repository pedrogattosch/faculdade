#include <stdlib.h>
#include "FE.h"

Fila *cria_fila(){
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->inicio = f->fim = 0;
}

void push(Fila *f, int x){
    f->v[f->fim] = x;
    f->fim++ % MAX;
}

int pop(Fila *f){
    int x = f->v[f->inicio];
    f->inicio++ % MAX;

    return x;
}
