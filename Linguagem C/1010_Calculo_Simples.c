#include <stdio.h>
 
int main() {
 
    int cod1, qt1, cod2, qt2;
    double vlr1, vlr2, total;
    
    scanf("%d %d %lf", &cod1, &qt1, &vlr1);
    scanf("%d %d %lf", &cod2, &qt2, &vlr2);
    
    total = (vlr1*qt1) + (vlr2*qt2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
