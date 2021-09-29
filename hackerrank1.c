#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, sum1, dif1;
    float c,d ;
    float sum2, dif2;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    sum1 = a + b;
    dif1 = a - b;
    sum2 = c + d;
    dif2 = c - d;
    
    printf("%d ", sum1);
    printf("%d", dif1);
    printf("\n");
    printf("%.1f ", sum2);
    printf("%.1f", dif2);

    return 0;
}
