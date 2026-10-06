#include <stdio.h>

int main()
{

    float s, ns, p, a;
    
    printf("Digite o salário atual: ");
    scanf("%f", &s);
    
    if(s <= 1000.00){
        
        p = 20;
        ns = s + (s * (p / 100));
        a = ns - s;
        
        printf("Novo salário: %.2f\n", ns);
        printf("Aumento: %.2f\n", a);
        printf("Porcentagem do aumento: %.f", p);
    }
    else{
        if(s > 1000.00 && s <= 3000.00){
        
        p = 15;
        ns = s + (s * (p / 100));
        a = ns - s;
        
        printf("Novo salário: %.2f\n", ns);
        printf("Aumento: %.2f\n", a);
        printf("Porcentagem do aumento: %.f", p);    
        }
        else{
            if(s > 3000.00 && s <= 8000.00){
            p = 10;
            ns = s + (s * (p / 100));
            a = ns - s;
        
            printf("Novo salário: %.2f\n", ns);
            printf("Aumento: %.2f\n", a);
            printf("Porcentagem do aumento: %.f", p);    
            }
            else{
            p = 5;
            ns = s + (s * (p / 100));
            a = ns - s;
        
            printf("Novo salário: %.2f\n", ns);
            printf("Aumento: %.2f\n", a);
            printf("Porcentagem do aumento: %.f", p);
            }
        }
    }
    
    return 0;
}