#include <stdio.h>

int main()
{
   int v[10], v1[10], p = -1, i, j;
   
   for(i = 0; i < 10; i++){
        v[i] = p;
        p = p - 1;
        printf("%d ", v[i]);
   }
   
   printf("\n");
   
   for(i = 9; i >= 0; i--){
       v1[i] = v[i];
       printf("%d ", v1[i]);
   }
   
    return 0;
}