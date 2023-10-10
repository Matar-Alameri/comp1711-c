#include<stdio.h>
#include<string.h>

int main () {
    // this a comment.
    /*
    this also is a comment*/
    char name[15];
    printf("instert a name: ");
    scanf("%s", name);
    printf("the name is %s\n", name);
    strrev(name);
    printf("the reverse of the name: %s\n", name);
    return 0;
}