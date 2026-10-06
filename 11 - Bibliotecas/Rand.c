#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    printf("Números da sorte: ");
    srand(time(NULL));
    for(int i = 0; i < 6; i++){
        int n = rand() % 60;
        printf("%d ", n);    
   }

    return 0;
}