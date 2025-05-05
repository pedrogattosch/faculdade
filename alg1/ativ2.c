#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

typedef struct{
    int v[MAX];
    int topo;
} Pilha;

Pilha *cria_pilha() {
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

int main(){
    char s[MAX];
    Pilha *p = cria_pilha();

    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++){
        char c = s[i];
        if(c >= '0' && c <= '9'){
            push(p, c - '0');
        } else if(c == '+'){
            int b = pop(p);
            int a = pop(p);
            push(p, a + b);
        } else if(c == '*'){
            int b = pop(p);
            int a = pop(p);
            push(p, a * b);
        }
    }

    printf("%d\n", pop(p));

    free(p);
    return 0;
}
