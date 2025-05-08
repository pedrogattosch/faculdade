#include <stdio.h>

void imprimebinario(int n){
	if(n == 0) return;
	imprimebinario(n / 2);
	printf("%d\n", n % 2);
}

int main(){
	int n;

	scanf("%d", &n);
	imprimebinario(n);

	return 0;
}
