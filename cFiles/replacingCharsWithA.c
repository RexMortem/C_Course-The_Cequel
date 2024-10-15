#include <stdio.h>

int main(){
    char someText[] = "Hello, my name is Ed!";

    int currentIndex = 0; 

    while(someText[currentIndex] != '\0'){
        someText[currentIndex] = 'A';
        currentIndex++;
    }

    printf("%s\n", someText); // AAAAAAAAAAAAAAAAAAAAA
}