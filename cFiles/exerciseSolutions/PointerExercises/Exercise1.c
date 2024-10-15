#include <stdio.h>

int main(){
    int x = 5; // don't use this
    int y = 6; // don't use this
    int* a = &x; // use this
    int* b = &y;  // use this 

    printf("%d | %d \n", *a + *b, *a * *b); // sum & product  
    
    // editing x,y using a,b
    *a = 51;
    *b = 62;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
}