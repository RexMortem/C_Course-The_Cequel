#include <stdio.h>

int main(){
    int anArray[] = {2, 3, 5, 7, 11};
    int* p = &anArray[0];

    // one key difference: sizeof 

    printf("sizeof array: %d\n", sizeof(anArray)); // 20
    printf("sizeof pointer: %d\n", sizeof(p)); // 8

    return 0;
}
