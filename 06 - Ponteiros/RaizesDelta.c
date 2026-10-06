#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2){
    float delta = pow(b, 2) - 4 * a * c;
    
    if(delta < 0){
        return 0;
    }
    else{
        if(delta == 0){
            *x1 = -b / (2 * a);
            return 1;
        }
        else{
            *x1 = (-b + sqrt(delta)) / (2 * a);
            *x2 = (-b - sqrt(delta)) / (2 * a);
           return 2;
        }
    }
}

int main(){
    
    int r;
    float a, b, c;
    float x1, x2;
    float *p1 = &x1;
    float *p2 = &x2;
    
    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &a, &b, &c);
    
    r = raizes(a, b, c, p1, p2);
    
    if(r == 0){
        printf("Nao ha raizes!");
    }
    else{
        if(r == 1){
            printf("Raiz 1: %.2f", x1);
        }
        else{
            printf("Raiz 1: %.2f\n", x1);
            printf("Raiz 2: %.2f", x2);
        }
    }
    
    return 0;
}