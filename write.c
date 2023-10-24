#include<stdio.h>

int main(){

    char filename[] = "text.txt";
    FILE *file = fopen(filename,"w");
    if (file==NULL){
        perror("");
        return 1;
    }

    int num, number=
}