#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcolaDenaro(int c, int t, int anni);

int main(int argc, char** argv) {
    int somma_iniziale;
    int anni;
    int tasso;
    double risultato;
    
    printf("Inserisci la somma di denaro iniziale: ");
    scanf("%d",&somma_iniziale);
    
    printf("Inserisci gli anni: ");
    scanf("%d",&anni);
    
    printf("Inserisci il tasso di interesse: ");
    scanf("%d",&tasso);
    
    risultato = calcolaDenaro(somma_iniziale,anni,tasso);
    
    printf("Risultato: %g",risultato);
    
    return (EXIT_SUCCESS);
}

double calcolaDenaro(int c, int t, int anni){
    double risultato;
    
    risultato = c * ( pow((1+(t/100)),anni) );
    
    return risultato;
}