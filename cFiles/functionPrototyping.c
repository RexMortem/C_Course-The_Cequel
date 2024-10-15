#include <stdio.h>

int diff(int a, int b);

int main(){
    printf("%d\n", diff(19, 16));
}

int diff(int a, int b){
    return a - b;
}