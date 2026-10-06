#include <stdio.h>

int main()
{
    int fps[6], i;
    float b;

    printf("Digite diferentes momentos de seu FPS: \n");
    
    for(i = 0; i < 6; i++){
        printf("Momento %d: ", i + 1);
        scanf("%d", &fps[i]);
        b += fps[i];
    }

    printf("A média de FPS é: %.2f", b / 6);

    return 0;
}