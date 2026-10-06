    #include <stdio.h>

    int main(){

        float s;

        printf("Digite o salario base: ");
        scanf("%f", &s);

        printf("O total liquido e %.2f.", ( s - (s * (2.0 / 100.0))));

        return 0;
    }