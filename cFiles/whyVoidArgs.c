#include <stdio.h>

void scream(){
    printf("AHHH THIS FUNCTION SHOULD HAVE NO ARGUMENTS!!!\n");
}

int main(){
    scream(5); // still prints fine: AHHH THIS FUNCTION SHOULD HAVE NO ARGUMENTS!!!
}