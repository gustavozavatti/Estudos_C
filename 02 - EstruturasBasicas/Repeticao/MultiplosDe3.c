#include <stdio.h>

int main(){

    int i = 0, n = 0;

    printf("Cinco multiplos de tres: ");
    while(i < 5){
        n += 3;
        printf("%d ", n);
        i++;
    }

    return 0;
}