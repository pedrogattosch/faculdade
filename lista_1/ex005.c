#include <stdio.h>

void imprimedigitosinv(int n){
	if(n == 0) return;
	printf("%d\n", n % 10);
	imprimedigitosinv(n / 10);
}

int main(){
	int n;

	scanf("%d", &n);
	imprimedigitosinv(n);
	
	return 0;
}
