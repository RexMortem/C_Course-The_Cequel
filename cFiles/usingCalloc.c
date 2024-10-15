#include <stdio.h>
#include <stdlib.h>

int main(){
    int* p = calloc(10, sizeof(int));

    free(p);
    
    return 0;
}