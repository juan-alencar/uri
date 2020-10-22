#include <stdio.h>
 
int main() {
 
    char nome[20];
    double salario, vendas, total;
    
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    getchar();
    
    total = salario + (vendas * 15 / 100);
    
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}
