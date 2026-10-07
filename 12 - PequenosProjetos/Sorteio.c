#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    int sorteio[6];
    int fe[6] = {57, 44, 13, 4, 10, 38};
    int acertos = 0;
    
    srand(time(NULL));
    
    
     for (int i = 0; i < 6; ) {
        int num = rand() % 60 + 1;
        int j;
        for (j = 0; j < i; j++)
            if (sorteio[j] == num) break;
        if (j == i) sorteio[i++] = num;
    }
    
    printf(" ========== C-SENA =============\n");
    for(int i = 0; i < 6; i++){
        printf("    %d ", sorteio[i]);
    }
    
    printf("\n");
    
    printf(" ========== FEZINHA ============ \n");
    for(int i = 0; i < 6; i++){
        printf("    %d ", fe[i]);
    }
    
    printf("\n ========== RESULTADO ========== \n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(sorteio[i] == fe[j]){
                printf("    %d", sorteio[i]);
                acertos++;
            }
        }
    }
    
    printf("\n");

    printf("\nTotal de acertos: %d ", acertos);

    return 0;
}