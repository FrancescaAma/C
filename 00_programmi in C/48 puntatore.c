#include <stdio.h>

int main(){
    int x=5;
    int*p=&x;

    printf("%p\n", (void*)&x);
    printf("%p", (void*)p);
}