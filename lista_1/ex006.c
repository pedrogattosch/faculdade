#include <stdio.h>

void imprimedigitos(int n){
	if(n == 0) return;
	imprimedigitos(n / 10);
	printf("%d\n", n % 10);
}

int main(){
	int n;

	scanf("%d", &n);
	imprimedigitos(n);

	return 0;
}
