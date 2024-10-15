#include <stdio.h>

int main(){
    int anArray[] = {2, 3, 5, 7, 11};
    int* p = &anArray[0];

    printf("%d\n", p[0]); // 2

    for(int i = 1; i < 5; i++){
        printf("%d\n", p[i]); // 3, 5, 7, 11
    }

    return 0;
}

// (note for ed): exe named indP