#include <stdio.h>

void passingArray(int* passedArray, int length){
    printf("Last element: %d\n", passedArray[length-1]);
}

int main(){
    int ourArray[] = {1, 3, 6, 10, 15};
    printf("%d\n", sizeof(ourArray)); // 20 on my machine  

    passingArray(ourArray, 5);

    return 0;
}