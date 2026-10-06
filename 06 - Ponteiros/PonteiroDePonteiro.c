#include <stdio.h>

int main(){
    int x = 100;
    int *px = &x;
    int **ppx = &px;

    printf("&PPX: %p\n", &ppx);
    printf("PPX: %p\n", ppx);
    printf("*PPX: %p\n", *ppx);
    printf("**PPX: %d\n", **ppx);
}