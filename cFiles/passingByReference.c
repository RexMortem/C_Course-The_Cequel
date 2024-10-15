#include <stdio.h>

void print1GreaterThanN(int* n){
    (*n)++; // be very careful with brackets here! *n++ will increment the memory address of the pointer
    printf("One greater than n: %d\n", *n); 
}

int main(){
    int x = 5; 
    print1GreaterThanN(&x);
    printf("%d\n", x); // now 6!

    return 0;
}