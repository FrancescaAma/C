#include <stdio.h>
int main(){
	int base, altezza, area;
    printf("base = ");
	scanf("%d", &base);
    printf("altezza = ");
    scanf("%d", &altezza);
	area=base*altezza/2;
	printf("area=%d", area);
}