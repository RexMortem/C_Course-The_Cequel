#include <stdio.h>

int doubleMyNumber(int n);
void doubleMyNumberEdit(int* n);

int doubleMyNumber(int n){
    return n*2;
}

void doubleMyNumberEdit(int* n){
    *n *= 2;
}

int main(){
    int x = 9;
    printf("%d\n", doubleMyNumber(x));

    doubleMyNumberEdit(&x);
    printf("%d\n", x);
    
    return 0;
}