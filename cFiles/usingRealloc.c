#include <stdio.h>
#include <stdlib.h>

int main(){
    int* p = malloc(10 * sizeof(int));

    // oh no! I actually need 20 ints 

    int* np = realloc(p, 20 * sizeof(int));

    if(np == NULL){
        return -1; 
    }

    p = np;
    return 0;
}