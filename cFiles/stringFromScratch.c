#include <stdio.h>

int main(){
    char myNameWithoutNull[] = {'e', 'd', 'w', 'a', 'r', 'd'};
    printf("%s\n", myNameWithoutNull); // edward└‼í (undefined behaviour)

    char myName[] = {'e', 'd', 'w', 'a', 'r', 'd', '\0'};
    printf("%s\n", myName); // edward

    char partOfMyName[] = {'e', 'd', '\0', 'w', 'a', 'r', 'd'};
    printf("%s\n", partOfMyName); // ed

}