#include <stdio.h>

int potencial(int x, int n){
	if(n == 0) return 1;
	return x * potencial(x, n-1);
}

int main(){
	int n, x;
	
	printf("Digite o valor para X e para N: ");
	scanf("%d %d", &x, &n);

	printf("Resultado de %d elevado a %d: %d\n", x, n, potencial(x, n));

	return 0;
}
