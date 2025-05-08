#include <stdio.h>

int fatorial(int num){
	if(num == 0) return 1;
	return num*fatorial(num - 1);
}

int main(){
	int n;

	scanf("%d", &n);
	
	printf("O fatorial de %d é %d\n", n, fatorial(n));

	return 0;
}
