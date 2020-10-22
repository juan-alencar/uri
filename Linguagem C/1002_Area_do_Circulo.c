#include <stdio.h>
 
int main() {
 
    double r, pi = 3.14159, a;
    
    scanf("%lf", &r);
    a =  pi * (r*r);
    
    printf("A=%.4lf\n", a);
    
    return 0;
}
