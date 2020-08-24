#include <stdio.h>
#include <math.h>

int main (){
    float x, i = 0, A = 1 ;
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    printf("Nhap x: "); scanf("%f", &x);
    for ( ; i <= n ; i++){
        A *= ( pow ( x , i ) + (1 / pow ( i, 2 )));
    }
    printf("A = %.2f", A);
    return 0;
}

