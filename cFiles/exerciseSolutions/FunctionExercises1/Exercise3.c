#include <stdio.h>

int main(int argc, char* args[]){
    if(argc != 3){
        printf("Incorrect number of arguments passed!\n");
        return -1;
    }

    printf("Your name is %s %s!", args[1], args[2]);
    return 0;
}