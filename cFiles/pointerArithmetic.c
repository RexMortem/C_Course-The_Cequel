#include <stdio.h>

int main(){
    int a = 0;
    int* p = &a; 

    printf("%p\n", p); // 61FE14

    p++; // increment by 1

    printf("%p\n", p); // 61FE18
    return 0;
}