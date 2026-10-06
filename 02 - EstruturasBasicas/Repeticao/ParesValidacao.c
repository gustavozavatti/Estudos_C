#include <stdio.h>

int main()
{
    int at[10];
    
    printf("Digite 10 números: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &at[i]);
    }
    
    for(int i = 0; i < 10; i++){
        if(at[i] % 2 == 0){
            printf("%d ", at[i]);
        }
    }
    return 0;
}