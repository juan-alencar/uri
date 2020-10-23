#include <stdio.h>
 
int main() {
 
    int a, b, c, maiorab;
    
    scanf("%d %d %d", &a, &b, &c);
    
    maiorab = (a + b + abs(a - b)) / 2;
    maiorab = (c + maiorab + abs(maiorab - c)) / 2;
    
    printf("%d eh o maior\n", maiorab);

    return 0;
}