#include <stdlib.h>
#include "PE.h"

Pilha *cria_pilha(){
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = -1;

    return p;
}

void push(Pilha *p, int x){
    p->topo++;
    p->v[p->topo] = x;
}

int pop(Pilha *p){
    int x = p->v[p->topo];
    p->topo--;

    return x;
}
