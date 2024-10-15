#include <stdio.h>

int main(){
    int anArray[] = {2, 3, 5, 7, 11};
    printf("%d\n", anArray); // 6422016

    printf("Array: %p\n", anArray); // 61FE00

    for(int i = 0; i < 5; i++){
        printf("Element at location: %p\n", &anArray[i]); // 61FE00, 61FE04, 61FE08, 61FE0C, 61FE10
    }

    return 0;
}