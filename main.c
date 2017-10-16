#include <stdio.h>
#include <stdlib.h>

void intToRoman(int number);

int main(int argc, char** argv) {
    
    intToRoman(15);
    
    return (EXIT_SUCCESS);
}

void intToRoman(int number){
    int unita = (number%10);
    int decine = (number/10)%10;
    int centinaia = (number/100);
    
    printf("%d %d %d", centinaia, decine, unita);
    
    return;
}