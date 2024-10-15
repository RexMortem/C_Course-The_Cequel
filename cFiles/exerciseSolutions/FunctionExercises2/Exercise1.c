#include <stdio.h>

void print1GreaterThanN(int* n){ // this function no longer does what the name does 
    printf("Memory address of n: %p\n", &n);
}

int main(){
    int x = 5; 
    printf("Memory address of x: %p\n", &x);
    print1GreaterThanN(&x);

    return 0;
}