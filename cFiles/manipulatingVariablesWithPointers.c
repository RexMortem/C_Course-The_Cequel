#include <stdio.h>

int main(){
    int a = 3;
    int* pointerToA = &a;

    (*pointerToA)++; // updating a 

    printf("%d\n", a); // 4
}