#include <stdio.h>
 
int main() {
 
    double r, pi = 3.14159, vol;
    scanf("%lf", &r);
    
    vol = (4.0/3) * pi * (r*r*r);
    
    printf("VOLUME = %.3lf\n", vol);
    
    return 0;
}