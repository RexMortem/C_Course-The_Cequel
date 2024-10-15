#include <stdlib.h>
#include <stdio.h>

int main(){
    int* p = malloc(20 * sizeof(int));
    printf("%d\n", sizeof(p)); // this does not print the size of the block of memory 

    free(p);
    
    return 0;
}