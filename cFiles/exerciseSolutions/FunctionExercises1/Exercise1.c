#include <stdio.h>

int div(int a, int b){
    if(b != 0){
        return a/b;
    }
}

int main(){
    printf("%d\n", div(5, 2)); // intended behaviour
    printf("%d\n", div(5, 0)); // returns nothing -> undefined behaviour

    for(int i = 1; i < 10; i++){
        printf("%d\n", div(i, 0)); // more interesting undefined behaviour: 1, 2, 3, 4, 5, 6, 7, 8, 9
    }
}

/*
    When div does not return a value, undefined behaviour happens. When you pass 0 as b, you cannot trust the output from div. 

    Interestingly: on my machine, the for loop outputs the value of i each time. This *might* be because my machine spits out the latest bit of memory. 
    However, it is the result of undefined behaviour which means you CANNOT depend on this to happen every time you run it, on every machine. 
    Your machine may output different values, and it may output different values under different conditions that you run the program. 
*/