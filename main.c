#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n;
    int max;    //variabile che conterrà il valore massimo
    
    n   = 0;
    max = n;
    
    do{
        printf("Inserisci un numero: ");
        scanf("%d",&n);
        
        if(n != 0)
            if(n > max)
                max = n;
            
    }while(n != 0);
    
    printf("Il maggiore e': %d",max);
    
    return (EXIT_SUCCESS);
}

