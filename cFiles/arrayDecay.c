#include <stdio.h>

void passingArray(int passedArray[]){
    printf("%d\n", sizeof(passedArray)); // 8 on my machine
}

int main(){
    int ourArray[] = {1, 3, 6, 10, 15};
    printf("%d\n", sizeof(ourArray)); // 20 on my machine  

    passingArray(ourArray);

    return 0;
}