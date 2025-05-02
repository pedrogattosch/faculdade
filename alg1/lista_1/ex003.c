#include <stdio.h>

int fibonacci(int num){
	if(num==1) return 1;
	if(num==0) return 0;
	return fibonacci(num-1) + fibonacci(num-2);
}

int main(){
	int n;

	scanf("%d", &n);
	printf("%d\n", fibonacci(n));
	
	return 0;
}
