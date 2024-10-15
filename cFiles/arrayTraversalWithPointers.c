#include <stdio.h>

int main(){
    int array[] = {1, 1, 2, 3, 5};

    for(int i = 0; i < 5; i++){
        printf("%d\n", *(array+i)); // 1, 1, 2, 3, 5
    }

    return 0;
}