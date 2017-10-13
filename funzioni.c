#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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