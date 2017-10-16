#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

int spawnNumber();

int main(int argc, char** argv) {
    int number = spawnNumber();
    int input;
    int success;
    
    success = FALSE;
    int i = 0;
    do{
        printf("Indovina il numero: ");
        scanf("%d",&input);
        
        if(input != number){
            if(input == 0)
                printf("Exit ...\n");
            else if(input < number){
                printf("%d e' troppo piccolo, prova ancora\n",input);
                i++;
            }
            else if(input > number){
                printf("%d e' troppo grande, prova ancora\n",input);
                i++;
            }
        }
        else{
            if(input == number)
                success = TRUE;
        }
            
    } while(input != number && input != 0);
    
    if(success)
        printf("Congratulazioni, hia indovinato il numero (%d) in %d tentativi",number,i);
    else
        printf("Il numero era: %d e hai fatto %d tentativi",number,i);
    
    return (EXIT_SUCCESS);
}

int spawnNumber(){
    int seme; 
    int number;

    srand(time(NULL));
    number = (rand()+1)%100;
    
    return number;
}

