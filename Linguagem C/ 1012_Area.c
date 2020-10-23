#include <stdio.h>
 
int main() {
 
    double a, b, c;
    double tri, cir, trpz, quad, ret;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    tri = (a * c) / 2.0;
    cir = 3.14159 * (c * c);
    trpz = ((a + b) * c) / 2.0;
    quad = b * b;
    ret = a * b;
    
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trpz);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);
    
    return 0;
}