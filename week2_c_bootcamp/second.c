#include<stdio.h>

int main () {
    float var1;
    float var2;
    printf("insert length: ");
    
    scanf("%f", &var1);
    printf("inster width: ");
    scanf("%f", &var2);
    printf("length is %f, width is %f\n", var1, var2);
    printf("Area = %f\n", var1*var2);
    return 0;
}