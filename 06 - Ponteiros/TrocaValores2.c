#include <stdio.h>

int main()
{
    int i = 10;
    float f = 8.99;
    char l = 'G';
    int *pi = &i;
    float *pf = &f;
    char *pl = &l;
    
    printf("Antes -- I: %d -- F: %.2f -- L: %c\n", i, f, l);
    *pi = 20;
    *pf = 10.99;
    *pl = 'g';
    printf("Depois -- I: %d -- F: %.2f -- L: %c", i, f, l);


    return 0;
}