#include <stdio.h>

int main(){
    char a = 5;
    char b = 14;
    
    printf("%p\n", &a); // 61FE17
    printf("%p\n", &b); // 61FE18

    char* aPointer = &a; 
    printf("%p\n", aPointer);
    printf("%d\n", *aPointer);
}