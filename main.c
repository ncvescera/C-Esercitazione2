#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/*
 * Funzione che stabilisce se un numero è primo
 * 
 * @param number Numero da stabilire se è primo
 * @return Ritorna 1 se il numero è primo, altrimenti 0
 */
int isPrime(int number);

int main(int argc, char** argv) {
    int n;
    
    printf("Inserisci un numero maggiore di 0: ");
    scanf("%d",&n);
    
    if(n > 0){
        if(isPrime(n))
            printf("Il numero %d e' primo\n",n);
        else
            printf("Il numero %d NON e' primo\n",n);
    }
    else {
        printf("Il numero deve essere maggiore di 0");
        return(EXIT_FAILURE);
    }
    
    //seconda parte
    printf("Inserisci il valore massimo dell'intervallo: ");
    scanf("%d",&n);
    
    printf("I numeri primi dell'intervallo [1,%d] sono: ",n);
    
    for(int i = 1; i<=n; i++){
        if(isPrime(i))
            printf("%d ",i);
    }
    
    return (EXIT_SUCCESS);
}

int isPrime(int number){
    int primo = TRUE;

    if(number == 1)
        primo = FALSE;
    
    else{
        for(int i = 2; i < number && primo == TRUE; i++){
            if(number%i == 0)
                primo = FALSE;
        }
    }
    
    return primo;
}