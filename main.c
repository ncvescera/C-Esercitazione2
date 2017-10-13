#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Funzione che calcola l'area del quarato di lato l
 * 
 * @param l Lato del quadrato
 * @return Area del quadrato
 */
float areaQuadrato(float l);

/**
 * Funzione che calcola l'area del rettangolo data la base e l'altezza
 * @param base Base del rettangolo
 * @param altezza Altezza del rettangolo
 * @return Area del rettangolo
 */
float areaRettangolo(float base, float altezza);

/**
 * Funzione che calcola l'area del cerchio dato il raggio
 * @param raggio Raggio del cerchio
 * @return Area del cerchio
 */
float areaCerchio(float raggio);

/**
 * Funzione che stampa il menu
 */
void menu();

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

float areaQuadrato(float l){
    float result;
    
    result = pow(l,2);
    
    return result;
}

float areaRettangolo(float base, float altezza){
    float result;
    
    result = base*altezza;
    
    return result;
}

float areaCerchio(float raggio){
    const float PI = 3.14159;
    float result;
    
    result = PI*(pow(raggio,2));
    
    return result;
}

void menu(){
    printf("\tMENU\n");
    printf("1- Area Quadrato\n");
    printf("2- Area Rettangolo\n");
    printf("3- Area Cerchio\n");
    printf("0- Exit\n\n");
    
    return;
}