#include <stdio.h>

void print1GreaterThanN(int n){
    n++; 
    printf("One greater than n: %d\n", n); 
}

int main(){
    int x = 5; 
    print1GreaterThanN(x);
    printf("%d\n", x); // still 5!

    return 0;
}