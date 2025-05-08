#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "PD.h"
#include "FE.h"

#define MAX_CHAR 256

char *certificado(Pilha *p, char *s){


}

int main(){
    Pilha *p = cria_pilha();
    char comando[MAX_CHAR];

    while(1){
        printf("> ");
        scanf("%s", comando);

		if(strcmp(comando, "certificado") == 0){
		
		} else(strcmp(comando, "F") == 0){
			break;
		}
    }

	free(p); // libera_pilha(p);
    return 0;
}
