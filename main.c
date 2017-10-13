#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"

int main(int argc, char** argv) {
    int scelta;
    
    do{
        menu();
        
        printf("> ");
        scanf("%d",&scelta);
        
        switch(scelta){
            case 0: //uscita
                printf("Exit ...\n");
                
                break;
            case 1: //area quadrato
                {
                    float lato = 0;

                    printf("Inserisci il alto del quadrato: ");
                    scanf("%f",&lato);

                    printf("L'area del quadrato e': %g\n\n",areaQuadrato(lato));

                    break;
                }
            case 2: //area rettangolo
                {
                    float base, altezza;

                    printf("Inserisci la base e l'altezza del rettangolo: ");
                    scanf("%f %f",&base, &altezza);

                    printf("L'area del rettangolo e': %g\n\n",areaRettangolo(base,altezza));

                    break;
                }
            case 3: //area cerchio
                {
                    float raggio;

                    printf("Inserisci il raggio del cerchio: ");
                    scanf("%f",&raggio);

                    printf("L'area del cerchio e': %g\n\n",areaCerchio(raggio));

                    break;
                }
            default:    //valore di default
                printf("Voce inesistente");
                break;    
        }
        
    } while(scelta != 0);
    
    return (EXIT_SUCCESS);
}