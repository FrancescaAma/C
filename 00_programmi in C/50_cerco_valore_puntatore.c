#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n=4;
	
	printf("%p\n", &n);
	
	uintptr_t addr = 0x000000000062FE3C; //in base a cosa printa prima si cambia
	unsigned char *t = (unsigned char*)addr;
	printf("Valore:%02x\n", *t);
	
	return 0;
}
