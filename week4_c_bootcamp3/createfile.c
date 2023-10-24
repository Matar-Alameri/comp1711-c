#include<stdio.h>

int main(){
    char filename[] = "data.txt";
    FILE *file = fopen(filename, "w");

    return 0;
}