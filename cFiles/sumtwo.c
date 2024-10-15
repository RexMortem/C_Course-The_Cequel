#include <stdio.h>

int sumTwoInts(int a, int b){
    return a + b; 
}

int main(){
    int x = 10;
    int y = 5;
    int sum = sumTwoInts(x, y); 

    printf("Sum of x, y: %d\n", sum); // 15
    printf("Sum of 2, 4: %d\n", sumTwoInts(2, 4)); // 6
}