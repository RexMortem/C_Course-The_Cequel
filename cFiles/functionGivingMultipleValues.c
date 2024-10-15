#include <stdio.h>

int positiveNumberCheck(int n, int* isEven, int* isGreater, int* isFavourite){
    if(n <= 0){
        return 0; // could not give properties because number is not a strictly positive number
    }

    if(n%2 == 0){
        *isEven = 1; // recall 1 is considered 'true'
    }

    if(n > 10){
        *isGreater = 1;
    }

    if(n == 37){ // my favourite for now...
        *isFavourite = 1;
    }

    return 1; // ran successfully!
}

int main(){
    int n = 37;
    int isEven = 0; // automatically set to 'false'
    int isGreaterThanTen = 0;
    int isMyFavouriteNumber = 0;

    int succ = positiveNumberCheck(n, &isEven, &isGreaterThanTen, &isMyFavouriteNumber); // succ is short for success

    if(succ){
        printf("%d %d %d \n", isEven, isGreaterThanTen, isMyFavouriteNumber);
    }else{
        printf("Cannot give properties for n = %d\n", n);
    }
}