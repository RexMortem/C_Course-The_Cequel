#include <stdio.h>

int main(){
    char myName[] = "Edward";

    myName[3] = 'i';
    myName[4] = 'n';
    myName[5] = '\0'; // now myName = {'E', 'd', 'w', 'i', 'n', '\0', '\0'};
    
    printf("%s\n", myName); // Edwin
}