#include <stdio.h>

void incrementa(int x) {
    x = x + 1;
    printf("%d\n",x);
}

int main()
{
    int y = 1;
    printf("%d\n",y);
    
    incrementa(y);
    printf("%d\n",y);

    return 0;
}