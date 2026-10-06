#include <stdio.h>

int mdc(int x, int y){
    if(y == 0){
        return x;
    }
    else{
        return mdc(y, x % y);
    }

}

int main(){

    int x, y;

    printf("Digite dois valores: ");
    scanf("%d %d", &x, &y);


    printf("O mdc e: %d", mdc(x, y));

    return 0;
}