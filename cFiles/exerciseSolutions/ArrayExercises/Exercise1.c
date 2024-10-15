#include <stdio.h>

void printArray(int arr[], int length){
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
}
int main(){
    int a[] = {2,4,6,8};
    printArray(a, 4);
    return 0;
}