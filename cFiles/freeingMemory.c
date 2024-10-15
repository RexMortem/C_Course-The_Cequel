#include <stdio.h>
#include <stdlib.h>

int main(){
    char* longString = malloc(1000 * sizeof(int));

    for(int i = 0; i < 999; i++){
        longString[i] = 'A';
    }

    longString[999] = '\0';
    printf("%s\n", longString);

    // we're done with the string now
    free(longString);
    return 0;
}