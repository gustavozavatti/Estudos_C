#include <stdio.h>

int main()
{
    int x, y, i, t = 0;

    printf("Digite dois valores: ");
    scanf("%d %d", &x, &y);

    if(x < y){
        for(i = x + 1; i < y; i++){
            if(i % 2 != 0){
                t += i;
            }
        }
    } else {
        for(i = y + 1; i < x; i++){
            if(i % 2 != 0){
                t += i;
            }
        }
    }

    printf("Soma dos ímpares entre %d e %d = %d\n", x, y, t);

    return 0;
}
