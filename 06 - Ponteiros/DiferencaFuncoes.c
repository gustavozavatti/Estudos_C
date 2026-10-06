#include <stdio.h>

int mult(int x, int y){
    return x * y;
}
int mult1(int *px, int *py){
    return *px * *py;
}
int main(){
    int x, y;
    printf("Digite dois numero: ");
    scanf("%d %d", &x, &y);

    printf("Multi: %d\n", mult(x, y));
    printf("Multi Ref: %d", mult1(&x, &y));
}