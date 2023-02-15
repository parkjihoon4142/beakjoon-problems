#include <stdio.h>

int main(){
    int A = 0, B = 0, C = 0, D = 0, x = 0, y = 0;
    
    scanf("%d%d%d%d", &A, &B, &C, &D);
    
    x = A + D;
    y = B + C;
    
    if(x < y)
        printf("%d", x);
    else if (x > y)
        printf("%d", y);
    else
        printf("%d", y);
}

