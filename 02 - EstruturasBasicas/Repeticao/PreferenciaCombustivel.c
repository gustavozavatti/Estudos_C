#include <stdio.h>

int main()
{
    int n, i = 0 , j = 0, k = 0;
    
    while(n != 4){
        
        printf("Informe um código: ");
        scanf("%d", &n);
        
        if(n == 1){
            i++; 
        }
        else{
            if(n == 2){
                j++;
            }
            else{
                if(n == 3){
                    k++;
                }
            }
        }
    }
    
    printf("Muito Obrgado!\n");
    
    printf("Álcool: %d\n", i);
    printf("Gasolina: %d\n", j);
    printf("Diesel: %d\n", k);

    return 0;
}