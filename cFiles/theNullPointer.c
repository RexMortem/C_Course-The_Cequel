#include <stdio.h>

int main(){
    int* p1 = NULL;
    char* p2 = NULL;
    short* p3 = NULL;

    // let's try dereferencing them
    printf("%d\n", *p1); // frick 1
    printf("%d\n", *p2); // frick 2
    printf("%d\n", *p3); // frick 3
}