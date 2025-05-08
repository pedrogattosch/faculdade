#include <stdio.h>

int contardigitos(int n){
	if(n == 0) return 0;
	return 1 + contardigitos(n / 10);
}

int main(){
	int n;

	scanf("%d", &n);
	printf("O número %d tem %d dígitos\n", n, contardigitos(n));
	return 0;
}
