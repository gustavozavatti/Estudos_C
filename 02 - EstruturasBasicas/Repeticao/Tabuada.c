#include <stdio.h>

int main()
{
    int i, n;

    printf("Digite a tabuada: ");
    scanf("%d", &n);    
    for(i = 0; i <= 10; i++){
        printf("%d * %d = %d\n", i, n, n * i);
    }
    return 0;
}