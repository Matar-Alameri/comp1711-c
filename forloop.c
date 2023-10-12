#include <stdio.h>

int main() {
    int a, b;

    for (a = 1; a < 10;a=a+1 ){
            for(b=a; b<100; b= (b)^2){

        
                printf ("a is equal to %d\n, b is equal to %d\n", a, b);
                 } 
             }
    printf ("I've finished the loop and a is equal to %d\n", b);

    return (0);
}