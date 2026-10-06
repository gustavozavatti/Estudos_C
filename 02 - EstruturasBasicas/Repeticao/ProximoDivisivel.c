#include <stdio.h>

int main(){

    int q, s = 0;

    printf("Digite um numero: ");
    scanf("%d", &q);

    printf("Proximo divisivel: ");
    while(s == 0){
        if(q % 11 == 0 || q % 13 == 0 || q % 17 == 0){
            printf("%d", q);
            s++;
        }
    q++;
    }
    return 0;
}